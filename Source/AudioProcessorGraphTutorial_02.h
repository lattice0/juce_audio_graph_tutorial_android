/*
  ==============================================================================

   This file is part of the JUCE tutorials.
   Copyright (c) 2020 - Raw Material Software Limited

   The code included in this file is provided under the terms of the ISC license
   http://www.isc.org/downloads/software-support-policy/isc-license. Permission
   To use, copy, modify, and/or distribute this software for any purpose with or
   without fee is hereby granted provided that the above copyright notice and
   this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES,
   WHETHER EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR
   PURPOSE, ARE DISCLAIMED.

  ==============================================================================
*/

/*******************************************************************************
 The block below describes the properties of this PIP. A PIP is a short snippet
 of code that can be read by the Projucer and used to generate a JUCE project.

 BEGIN_JUCE_PIP_METADATA

 name:             AudioProcessorGraphTutorial
 version:          2.0.0
 vendor:           JUCE
 website:          http://juce.com
 description:      Explores the audio processor graph.

 dependencies:     juce_audio_basics, juce_audio_devices, juce_audio_formats,
                   juce_audio_processors, juce_audio_utils, juce_core,
                   juce_data_structures, juce_dsp, juce_events, juce_graphics,
                   juce_gui_basics, juce_gui_extra
 exporters:        xcode_mac, vs2019, linux_make

 type:             Component
 mainClass:        MainComponent

 useLocalCopy:     1

 END_JUCE_PIP_METADATA

*******************************************************************************/


#pragma once

//==============================================================================
class ProcessorBase  : public juce::AudioProcessor
{
public:
    //==============================================================================
    ProcessorBase()  {}

    //==============================================================================
    void prepareToPlay (double, int) override {}
    void releaseResources() override {}
    void processBlock (juce::AudioSampleBuffer&, juce::MidiBuffer&) override {}

    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override          { return nullptr; }
    bool hasEditor() const override                              { return false; }

    //==============================================================================
    const juce::String getName() const override                  { return {}; }
    bool acceptsMidi() const override                            { return false; }
    bool producesMidi() const override                           { return false; }
    double getTailLengthSeconds() const override                 { return 0; }

    //==============================================================================
    int getNumPrograms() override                                { return 0; }
    int getCurrentProgram() override                             { return 0; }
    void setCurrentProgram (int) override                        {}
    const juce::String getProgramName (int) override             { return {}; }
    void changeProgramName (int, const juce::String&) override   {}

    //==============================================================================
    void getStateInformation (juce::MemoryBlock&) override       {}
    void setStateInformation (const void*, int) override         {}

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ProcessorBase)
};

//==============================================================================
class OscillatorProcessor  : public ProcessorBase
{
public:
    OscillatorProcessor()
    {
        oscillator.setFrequency (440.0f);
        oscillator.initialise ([] (float x) { return std::sin (x); });
    }

    void prepareToPlay (double sampleRate, int samplesPerBlock) override
    {
        juce::dsp::ProcessSpec spec { sampleRate, static_cast<juce::uint32> (samplesPerBlock) };
        oscillator.prepare (spec);
    }

    void processBlock (juce::AudioSampleBuffer& buffer, juce::MidiBuffer&) override
    {
        juce::dsp::AudioBlock<float> block (buffer);
        juce::dsp::ProcessContextReplacing<float> context (block);
        oscillator.process (context);
    }

    void reset() override
    {
        oscillator.reset();
    }

    const juce::String getName() const override { return "Oscillator"; }

private:
    juce::dsp::Oscillator<float> oscillator;
};

//==============================================================================
class GainProcessor  : public ProcessorBase
{
public:
    GainProcessor()
    {
        gain.setGainDecibels (-6.0f);
    }

    void prepareToPlay (double sampleRate, int samplesPerBlock) override
    {
        juce::dsp::ProcessSpec spec { sampleRate, static_cast<juce::uint32> (samplesPerBlock), 2 };
        gain.prepare (spec);
    }

    void processBlock (juce::AudioSampleBuffer& buffer, juce::MidiBuffer&) override
    {
        juce::dsp::AudioBlock<float> block (buffer);
        juce::dsp::ProcessContextReplacing<float> context (block);
        gain.process (context);
    }

    void reset() override
    {
        gain.reset();
    }

    const juce::String getName() const override { return "Gain"; }

private:
    juce::dsp::Gain<float> gain;
};

//==============================================================================
class FilterProcessor  : public ProcessorBase
{
public:
    FilterProcessor() {}

    void prepareToPlay (double sampleRate, int samplesPerBlock) override
    {
        *filter.state = *juce::dsp::IIR::Coefficients<float>::makeHighPass (sampleRate, 1000.0f);

        juce::dsp::ProcessSpec spec { sampleRate, static_cast<juce::uint32> (samplesPerBlock), 2 };
        filter.prepare (spec);
    }

    void processBlock (juce::AudioSampleBuffer& buffer, juce::MidiBuffer&) override
    {
        juce::dsp::AudioBlock<float> block (buffer);
        juce::dsp::ProcessContextReplacing<float> context (block);
        filter.process (context);
    }

    void reset() override
    {
        filter.reset();
    }

    const juce::String getName() const override { return "Filter"; }

private:
    juce::dsp::ProcessorDuplicator<juce::dsp::IIR::Filter<float>, juce::dsp::IIR::Coefficients<float>> filter;
};

//==============================================================================
class MainComponent  : public juce::Component,
                       private juce::Timer
{
public:
    //==============================================================================
    using AudioGraphIOProcessor = juce::AudioProcessorGraph::AudioGraphIOProcessor;
    using Node = juce::AudioProcessorGraph::Node;

    //==============================================================================
    MainComponent()
        : mainProcessor (new juce::AudioProcessorGraph())
    {
        addAndMakeVisible (muteInput);
        muteInput.setToggleState (false, juce::dontSendNotification);

        addAndMakeVisible (processorSlot1);
        addAndMakeVisible (processorSlot2);
        addAndMakeVisible (processorSlot3);

        processorSlot1.addItemList (processorChoices, 1);
        processorSlot2.addItemList (processorChoices, 1);
        processorSlot3.addItemList (processorChoices, 1);

        addAndMakeVisible (labelSlot1);
        addAndMakeVisible (labelSlot2);
        addAndMakeVisible (labelSlot3);

        labelSlot1.attachToComponent (&processorSlot1, true);
        labelSlot2.attachToComponent (&processorSlot2, true);
        labelSlot3.attachToComponent (&processorSlot3, true);

        addAndMakeVisible (bypassSlot1);
        addAndMakeVisible (bypassSlot2);
        addAndMakeVisible (bypassSlot3);

        auto inputDevice  = juce::MidiInput::getDefaultDevice();
        auto outputDevice = juce::MidiOutput::getDefaultDevice();

        mainProcessor->enableAllBuses();

        deviceManager.initialiseWithDefaultDevices (2, 2);                          // [1]
        deviceManager.addAudioCallback (&player);                                   // [2]
        deviceManager.setMidiInputDeviceEnabled (inputDevice.identifier, true);
        deviceManager.addMidiInputDeviceCallback (inputDevice.identifier, &player); // [3]
        deviceManager.setDefaultMidiOutputDevice (outputDevice.identifier);

        initialiseGraph();

        player.setProcessor (mainProcessor.get());                                  // [4]

        //setSize (600, 400);
        startTimer (100);
    }

    ~MainComponent() override
    {
        auto device = juce::MidiInput::getDefaultDevice();

        deviceManager.removeAudioCallback (&player);
        deviceManager.setMidiInputDeviceEnabled (device.identifier, false);
        deviceManager.removeMidiInputDeviceCallback (device.identifier, &player);
    }

    //==============================================================================
    void paint (juce::Graphics& g) override
    {
        g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    }

    void resized() override
    {
        juce::FlexBox fb;
        fb.flexDirection  = juce::FlexBox::Direction::column;
        fb.justifyContent = juce::FlexBox::JustifyContent::center;
        fb.alignContent   = juce::FlexBox::AlignContent::center;

        auto width  = (float) getWidth()  / 2.0f;
        auto height = (float) getHeight() / 7.0f;

        juce::FlexItem mute (width, height, muteInput);

        juce::FlexItem slot1 (width, height, processorSlot1);
        juce::FlexItem slot2 (width, height, processorSlot2);
        juce::FlexItem slot3 (width, height, processorSlot3);

        juce::FlexItem bypass1 (width, height, bypassSlot1);
        juce::FlexItem bypass2 (width, height, bypassSlot2);
        juce::FlexItem bypass3 (width, height, bypassSlot3);

        fb.items.addArray ({ mute, slot1, slot2, slot3, bypass1, bypass2, bypass3 });
        fb.performLayout (getLocalBounds().toFloat());
    }

private:
    //==============================================================================
    void initialiseGraph()
    {
        mainProcessor->clear();

        audioInputNode  = mainProcessor->addNode (std::make_unique<AudioGraphIOProcessor> (AudioGraphIOProcessor::audioInputNode));
        audioOutputNode = mainProcessor->addNode (std::make_unique<AudioGraphIOProcessor> (AudioGraphIOProcessor::audioOutputNode));
        midiInputNode   = mainProcessor->addNode (std::make_unique<AudioGraphIOProcessor> (AudioGraphIOProcessor::midiInputNode));
        midiOutputNode  = mainProcessor->addNode (std::make_unique<AudioGraphIOProcessor> (AudioGraphIOProcessor::midiOutputNode));

        connectAudioNodes();
        //connectMidiNodes();
    }

    void timerCallback() override { updateGraph(); }

    void updateGraph()
    {
        bool hasChanged = false;

        juce::Array<juce::ComboBox*> choices { &processorSlot1,
                                               &processorSlot2,
                                               &processorSlot3 };

        juce::Array<juce::ToggleButton*> bypasses { &bypassSlot1,
                                                    &bypassSlot2,
                                                    &bypassSlot3 };

        juce::ReferenceCountedArray<Node> slots;
        slots.add (slot1Node);
        slots.add (slot2Node);
        slots.add (slot3Node);

        for (int i = 0; i < 3; ++i)
        {
            auto& choice = choices.getReference (i);
            auto  slot   = slots  .getUnchecked (i);

            if (choice->getSelectedId() == 0)
            {
                if (slot != nullptr)
                {
                    mainProcessor->removeNode (slot.get());
                    slots.set (i, nullptr);
                    hasChanged = true;
                }
            }
            else if (choice->getSelectedId() == 1)
            {
                if (slot != nullptr)
                {
                    if (slot->getProcessor()->getName() == "Oscillator")
                        continue;

                    mainProcessor->removeNode (slot.get());
                }

                slots.set (i, mainProcessor->addNode (std::make_unique<OscillatorProcessor>()));
                hasChanged = true;
            }
            else if (choice->getSelectedId() == 2)
            {
                if (slot != nullptr)
                {
                    if (slot->getProcessor()->getName() == "Gain")
                        continue;

                    mainProcessor->removeNode (slot.get());
                }

                slots.set (i, mainProcessor->addNode (std::make_unique<GainProcessor>()));
                hasChanged = true;
            }
            else if (choice->getSelectedId() == 3)
            {
                if (slot != nullptr)
                {
                    if (slot->getProcessor()->getName() == "Filter")
                        continue;

                    mainProcessor->removeNode (slot.get());
                }

                slots.set (i, mainProcessor->addNode (std::make_unique<FilterProcessor>()));
                hasChanged = true;
            }
        }

        if (hasChanged)
        {
            for (auto connection : mainProcessor->getConnections())
                mainProcessor->removeConnection (connection);

            juce::ReferenceCountedArray<Node> activeSlots;

            for (auto slot : slots)
            {
                if (slot != nullptr)
                {
                    activeSlots.add (slot);

                    slot->getProcessor()->setPlayConfigDetails (mainProcessor->getMainBusNumInputChannels(),
                                                                mainProcessor->getMainBusNumOutputChannels(),
                                                                mainProcessor->getSampleRate(),
                                                                mainProcessor->getBlockSize());
                }
            }

            if (activeSlots.isEmpty())
            {
                connectAudioNodes();
            }
            else
            {
                for (int i = 0; i < activeSlots.size() - 1; ++i)
                {
                    for (int channel = 0; channel < 2; ++channel)
                        mainProcessor->addConnection ({ { activeSlots.getUnchecked (i)->nodeID,      channel },
                                                        { activeSlots.getUnchecked (i + 1)->nodeID,  channel } });
                }

                for (int channel = 0; channel < 2; ++channel)
                {
                    mainProcessor->addConnection ({ { audioInputNode->nodeID,         channel },
                                                    { activeSlots.getFirst()->nodeID, channel } });
                    mainProcessor->addConnection ({ { activeSlots.getLast()->nodeID,  channel },
                                                    { audioOutputNode->nodeID,        channel } });
                }
            }

            //connectMidiNodes();

            for (auto node : mainProcessor->getNodes())
                node->getProcessor()->enableAllBuses();
        }

        for (int i = 0; i < 3; ++i)
        {
            auto  slot   = slots   .getUnchecked (i);
            auto& bypass = bypasses.getReference (i);

            if (slot != nullptr)
                slot->setBypassed (bypass->getToggleState());
        }

        audioInputNode->setBypassed (muteInput.getToggleState());

        slot1Node = slots.getUnchecked (0);
        slot2Node = slots.getUnchecked (1);
        slot3Node = slots.getUnchecked (2);
    }

    void connectAudioNodes()
    {
        for (int channel = 0; channel < 2; ++channel)
            mainProcessor->addConnection ({ { audioInputNode->nodeID,  channel },
                                            { audioOutputNode->nodeID, channel } });
    }

    void connectMidiNodes()
    {
        mainProcessor->addConnection ({ { midiInputNode->nodeID,  juce::AudioProcessorGraph::midiChannelIndex },
                                        { midiOutputNode->nodeID, juce::AudioProcessorGraph::midiChannelIndex } });
    }

    //==============================================================================
    juce::StringArray processorChoices { "Oscillator", "Gain", "Filter" };

    juce::ToggleButton muteInput { "Mute Input" };

    juce::Label labelSlot1 { {}, { "Slot 1" } };
    juce::Label labelSlot2 { {}, { "Slot 2" } };
    juce::Label labelSlot3 { {}, { "Slot 3" } };

    juce::ComboBox processorSlot1;
    juce::ComboBox processorSlot2;
    juce::ComboBox processorSlot3;

    juce::ToggleButton bypassSlot1 { "Bypass 1" };
    juce::ToggleButton bypassSlot2 { "Bypass 2" };
    juce::ToggleButton bypassSlot3 { "Bypass 3" };

    std::unique_ptr<juce::AudioProcessorGraph> mainProcessor;

    Node::Ptr audioInputNode;
    Node::Ptr audioOutputNode;
    Node::Ptr midiInputNode;
    Node::Ptr midiOutputNode;

    Node::Ptr slot1Node;
    Node::Ptr slot2Node;
    Node::Ptr slot3Node;

    juce::AudioDeviceManager deviceManager;
    juce::AudioProcessorPlayer player;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
