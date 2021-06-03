# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

set(BINARY_NAME "juce_jni")

set(OBOE_DIR "/home/lz/Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe")

add_subdirectory (${OBOE_DIR} ./oboe)

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=16" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCE_PUSH_NOTIFICATIONS_ACTIVITY=\"com/rmsl/juce/JuceActivity\"" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "/home/lz/Downloads/juce-6.0.8-linux/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

if(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DJUCE_DISPLAY_SPLASH_SCREEN=1" "-DJUCE_USE_DARK_SPLASH_SCREEN=1" "-DJUCE_PROJUCER_VERSION=0x60008" "-DJUCE_MODULE_AVAILABLE_juce_audio_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_devices=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_formats=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_processors=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_utils=1" "-DJUCE_MODULE_AVAILABLE_juce_core=1" "-DJUCE_MODULE_AVAILABLE_juce_data_structures=1" "-DJUCE_MODULE_AVAILABLE_juce_dsp=1" "-DJUCE_MODULE_AVAILABLE_juce_events=1" "-DJUCE_MODULE_AVAILABLE_juce_graphics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_extra=1" "-DJUCE_MODULE_AVAILABLE_juce_opengl=1" "-DJUCE_MODULE_AVAILABLE_juce_video=1" "-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1" "-DJUCE_STRICT_REFCOUNTEDPOINTER=1" "-DJUCE_STANDALONE_APPLICATION=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000" "-DDEBUG=1" "-D_DEBUG=1")
elseif(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DJUCE_DISPLAY_SPLASH_SCREEN=1" "-DJUCE_USE_DARK_SPLASH_SCREEN=1" "-DJUCE_PROJUCER_VERSION=0x60008" "-DJUCE_MODULE_AVAILABLE_juce_audio_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_devices=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_formats=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_processors=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_utils=1" "-DJUCE_MODULE_AVAILABLE_juce_core=1" "-DJUCE_MODULE_AVAILABLE_juce_data_structures=1" "-DJUCE_MODULE_AVAILABLE_juce_dsp=1" "-DJUCE_MODULE_AVAILABLE_juce_events=1" "-DJUCE_MODULE_AVAILABLE_juce_graphics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_extra=1" "-DJUCE_MODULE_AVAILABLE_juce_opengl=1" "-DJUCE_MODULE_AVAILABLE_juce_video=1" "-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1" "-DJUCE_STRICT_REFCOUNTEDPOINTER=1" "-DJUCE_STANDALONE_APPLICATION=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000" "-DNDEBUG=1")
else()
    message( FATAL_ERROR "No matching build-configuration found." )
endif()

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/Main.cpp"
    #"../../../Source/MainComponent.h"
    #"../../../Source/MainComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_GenericInterpolator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_WindowedSincInterpolator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPacket.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPackets.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPBytestreamInputHandler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPConversion.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPConverters.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPDispatcher.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPFactory.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPIterator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPMidi1ToBytestreamTranslator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPMidi1ToMidi2DefaultTranslator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPMidi1ToMidi2DefaultTranslator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPProtocols.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPReceiver.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPSysEx7.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPSysEx7.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPTests.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPU32InputHandler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPUtils.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPUtils.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPView.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPView.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBuilder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamCallback.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Definitions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/LatencyTuner.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Oboe.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/ResultWithValue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/StabilizedCallback.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Utilities.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Version.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioClock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStreamBuilder.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/LatencyTuner.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/MonotonicCounter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/OboeDebug.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/StabilizedCallback.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Utilities.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Version.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/HyperbolicCosineWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/KaiserWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/CMakeLists.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/readme.md"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_HighPerformanceAudioHelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_51.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_stereo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/floor/floor_books.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/floor_all.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_8.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_11.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_16.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_44.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_8.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_16.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44p51.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44u.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_8.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_11.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_16.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_22.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_32.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44p51.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44u.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_X.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/analysis.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/backends.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/block.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codec_internal.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor0.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor1.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/highlevel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/info.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup_data.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mapping0.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/masking.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/os.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/res0.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/scales.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/sharedbook.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/synthesis.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisenc.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisfile.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/README.md"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/crctable.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_ParameterAttachments.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_ParameterAttachments.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_PluginHostType.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_PluginHostType.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_AllocationHooks.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_AllocationHooks.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_wasm_SystemStats.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_CompilerWarnings.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/juce_core.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_AudioBlock.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_AudioBlock_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_SIMDRegister.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Convolution.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Convolution.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Convolution_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_FFT.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_FFT.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_FFT_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Windowing.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Windowing.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_FastMathApproximations.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LogRampedValue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LogRampedValue_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LookupTable.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LookupTable.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Matrix.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Matrix.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Matrix_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Phase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Polynomial.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DelayLine.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DelayLine.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DryWetMixer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DryWetMixer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FIRFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FIRFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FIRFilter_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_IIRFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_IIRFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_IIRFilter_Impl.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Oversampling.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Oversampling.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Panner.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Panner.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorChain.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorChain_test.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorDuplicator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorWrapper.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_StateVariableFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Bias.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Chorus.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Chorus.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Compressor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Compressor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Gain.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_LadderFilter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_LadderFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Limiter.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Limiter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_NoiseGate.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_NoiseGate.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Oscillator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Phaser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Phaser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Reverb.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_WaveShaper.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/juce_dsp.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/juce_dsp.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/juce_dsp.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/juce_events.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_DragAndDrop.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_linux_Windowing.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_ScopedThreadDPIAwarenessSetter.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_HWNDComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_HWNDComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_android_Video.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/juce_video.cpp"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/juce_video.mm"
    "../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/juce_video.h"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_dsp.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../../JuceLibraryCode/include_juce_video.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_GenericInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Interpolators.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/utilities/juce_WindowedSincInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPacket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPackets.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPBytestreamInputHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPConversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPDispatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPMidi1ToBytestreamTranslator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPMidi1ToMidi2DefaultTranslator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPMidi1ToMidi2DefaultTranslator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPProtocols.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPReceiver.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPSysEx7.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPSysEx7.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPU32InputHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/ump/juce_UMPView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/AudioStreamCallback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Definitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/LatencyTuner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Oboe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/ResultWithValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/StabilizedCallback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Utilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/include/oboe/Version.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AAudioLoader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/aaudio/AudioStreamAAudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioClock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioSourceCaller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/AudioStreamBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/DataConversionFlowGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FilterAudioStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockAdapter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/FixedBlockWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/LatencyTuner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/MonotonicCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/OboeDebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/QuirksManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceFloatCaller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/SourceI16Caller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/StabilizedCallback.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Trace.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Utilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/common/Version.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoController.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/fifo/FifoControllerIndirect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/HyperbolicCosineWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/IntegerRatio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/KaiserWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/LinearResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/MultiChannelResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerMono.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/PolyphaseResamplerStereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/resampler/SincResamplerStereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ChannelCountConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ClipToRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/FlowGraphNode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/ManyToMultiConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MonoToMultiConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/MultiToMonoConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/RampLinear.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SampleRateConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SinkI24.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/flowgraph/SourceI24.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioInputStreamOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioOutputStreamOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamBuffered.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/AudioStreamOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/EngineOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OpenSLESUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/src/opensles/OutputMixerOpenSLES.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/CMakeLists.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/oboe/readme.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_HighPerformanceAudioHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.7/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/crctable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_ParameterAttachments.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_ParameterAttachments.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_PluginHostType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_PluginHostType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_AllocationHooks.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_AllocationHooks.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_wasm_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_CompilerWarnings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_AudioBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_AudioBlock_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_FixedSizeFunction_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_SIMDRegister.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Convolution.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Convolution.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Convolution_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_FFT.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_FFT.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_FFT_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/frequency/juce_Windowing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_FastMathApproximations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LogRampedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LogRampedValue_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LookupTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_LookupTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Matrix.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Matrix.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Matrix_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Phase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_Polynomial.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_BallisticsFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DelayLine.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DelayLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DryWetMixer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_DryWetMixer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FIRFilter_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_FirstOrderTPTFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_IIRFilter_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_LinkwitzRileyFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Oversampling.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Oversampling.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Panner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_Panner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorChain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorChain_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorDuplicator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_ProcessorWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_StateVariableFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/processors/juce_StateVariableTPTFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Bias.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Chorus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Chorus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Compressor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Compressor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Gain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_LadderFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_LadderFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Limiter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Limiter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_NoiseGate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_NoiseGate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Oscillator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Phaser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Phaser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/widgets/juce_WaveShaper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/juce_dsp.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/juce_dsp.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_dsp/juce_dsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_linux_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_ScopedThreadDPIAwarenessSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_HWNDComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_HWNDComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_android_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../Downloads/juce-6.0.8-linux/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

target_compile_options( ${BINARY_NAME} PRIVATE "-fsigned-char" )

if( JUCE_BUILD_CONFIGURATION MATCHES "DEBUG" )
    target_compile_options( ${BINARY_NAME} PRIVATE)
endif()

if( JUCE_BUILD_CONFIGURATION MATCHES "RELEASE" )
    target_compile_options( ${BINARY_NAME} PRIVATE)
endif()

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
    "oboe"
)
