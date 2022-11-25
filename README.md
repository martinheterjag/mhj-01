# Synth MHJ-01
MHJ-01 is a software polyphonic synth inspired by a mix of classic analog synth designs.
The main signal path is a classic "East coast" osc->filter->vca design, but with some "West coast" inspired features like continous wave shaping.

At the moment the project is designed on the fly, with design choices done while developing, so we will see where this goes.

# Getting started with development
The project is made with the Juce framework, load the project with projucer and pick development environment to tweak the code on your own.

# Style guide
The project C++ code base shall follow the JUCE style guide. There's a .clang-format file in this repository that can be used for formatting.
To use it in Visual Studio, run command "Format" and it will find the .clang-format file and ask if you want to use it. I found the file in this
forum post: https://forum.juce.com/t/automatic-juce-like-code-formatting-with-clang-format/31624/7 but it has a few tweaks to get it to work with
my projects.

The JUCE style guide can be found here: https://juce.com/discover/stories/coding-standards
