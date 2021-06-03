## Juce Graph Audio Processor Android

A port of https://docs.juce.com/master/tutorial_audio_processor_graph.html to Android, possibly compilable with iOS too. 

To make it work, run and then go in the settings and give a manual microphone permission, it will not ask to, it's a bare minimum example just for learning.

Also make sure nothing else is using the microphone on your device. 

Note that I disabled the MIDI things from the original example because they don't work on Android. If you leave them, it will still work but you'll get a crash dialog on startup, but it will work.
