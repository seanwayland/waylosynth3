/*******************************************************************************
* Plugex - PLUGin EXamples
*
* Plugex est une série de plugiciels auto-documentés permettant une étude 
* autonome du développement de plugiciels avec JUCE ainsi que des bases du
* traitement de signal audio avec le langage C++.
*
* © Olivier Bélanger 2020
*
*******************************************************************************/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "PlugexLookAndFeel.h"

class WayloSynth3AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    WayloSynth3AudioProcessorEditor (WayloSynth3AudioProcessor&, AudioProcessorValueTreeState& vts);
    ~WayloSynth3AudioProcessorEditor();

    void paint (Graphics&) override;
    void resized() override;

private:
    WayloSynth3AudioProcessor& processor;

    PlugexLookAndFeel plugexLookAndFeel;

    AudioProcessorValueTreeState& valueTreeState;

    Label title;

    Label  gainLabel;
    Slider gainKnob;

    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> gainAttachment;

    MidiKeyboardComponent keyboardComponent;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WayloSynth3AudioProcessorEditor)
};
