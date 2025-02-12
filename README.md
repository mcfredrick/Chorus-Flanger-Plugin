# TimeMachineDelay

![TMD Screen Shot](https://github.com/mcfredrick/TimeMachineDelay/blob/master/UIScreen.png)

## About this project:

This project is a work in progress. It is a chorus/delay effect plugin that can be used either as a standalone audio effect app or a VST3/AU plugin in any compatible DAW. New functionality will be added as it is developed. For some insight into my plans for the future of this app, check the [Project Board](https://github.com/mcfredrick/Chorus-Flanger-Plugin/projects/1).

## Installation:

If you would like to check out the current Windows build of the VST3 and standalone executable, simply download the TimeMachineDelay.exe and/or the TimeMachineDelay.vst3 file(s) from the "Current Builds" folder and follow the instructions in the provided README.txt.

Alternatively, if you'd like to work with the source code, continue reading.

## Working from source:

Note: This project is built with the JUCE framework. 

1. Clone this repository.

1. Open the TimeMachineDelay.jucer file from the root directory in the JUCE app. The JUCE app is available here: [Get Juce!](https://shop.juce.com/get-juce) A personal license is available for free.

1. Choose the appropriate exporter from the dropdown menu in JUCE. On windows this will likely be Visual Studio, Xcode on MacOSX. There are other options for exporter in JUCE and further documentation can be found on the JUCE website.

1. Press the round export button next to the dropdown menu with the icon for the chosen exporter.

1. Save and compile the project in VS/Xcode.

1. Place the compiled VST3 or AU in the appropriate folder for use in your DAW (see the documentation for your DAW). For standalone use, open the application file in the standalone folder.
