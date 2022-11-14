/*
  ==============================================================================

    NoiseGeneratorComponent.cpp
    Created: 14 Nov 2022 1:11:51pm
    Author:  Martin

  ==============================================================================
*/

#include <JuceHeader.h>
#include "NoiseGeneratorComponent.h"

//==============================================================================
NoiseGeneratorComponent::NoiseGeneratorComponent(juce::String name, juce::AudioProcessorValueTreeState& apvts)
    : SynthModuleComponent(name), volume_slider_("Volume")
{
    volume_slider_.attatchToParameter(apvts, "NOISE_VOLUME");
    addAndMakeVisible(volume_slider_);
}

NoiseGeneratorComponent::~NoiseGeneratorComponent()
{
}


void NoiseGeneratorComponent::resized()
{
    volume_slider_.setBounds(MODULE_PADDING,
        MODULE_PADDING,
        SLIDER_COMPONENT_WIDTH, SLIDER_COMPONENT_HEIGHT);
}
