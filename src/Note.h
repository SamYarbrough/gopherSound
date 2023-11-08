#ifndef GOPHERSOUND_NOTE_H
#define GOPHERSOUND_NOTE_H

#include <stdint.h>

#include "Effect.h"

class Note {
private:
    bool note_on;
    bool octave_on;
    bool instrument_on;
    bool volume_on;
    bool effects_on[3];

    uint8_t note;
    uint8_t octave;
    uint8_t instrument;
    uint8_t volume;
    Effect effects[3];

public:
    Note();

    bool isNoteOn();
    bool isOctaveOn();
    bool isInstrumentOn();
    bool isVolumeOn();
    bool isEffectOn(int);

    uint8_t getNote();
    uint8_t getOctave();
    uint8_t getInstrument();
    uint8_t getVolume();
    Effect getEffect(int);

    void setNote(uint8_t);
    void setOctave(uint8_t);
    void setInstrument(uint8_t);
    void setVolume(uint8_t);

    void setEffect(int, Effect);
    void setEffectEffect(int, uint8_t);
    void setEffectParameter(int, uint8_t);

    void unsetNote();
    void unsetOctave();
    void unsetInstrument();
    void unsetVolume();
    void unsetEffect(int);
};

Note::Note() {
    note_on = octave_on = instrument_on = volume_on = false;
    for (int i = 0; i < 4; i++) { effects_on[i] = false; }

    note = octave = instrument = volume = 0;
    for (int i = 0; i < 4; i++) { effects[i] = 0; }
}

bool Note::isNoteOn() { return note_on; }
bool Note::isOctaveOn() { return octave_on; }
bool Note::isInstrumentOn() { return instrument_on; }
bool Note::isVolumeOn() { return volume_on; }
bool Note::isEffectOn(int effect_index) { return effects_on[effect_index]; }

uint8_t Note::getNote() { return note; }
uint8_t Note::getOctave() { return octave; }
uint8_t Note::getInstrument() { return instrument; }
uint8_t Note::getVolume() { return volume; }
Effect Note::getEffect(int effect_index) { return effects[effect_index]; }

void Note::setNote(uint8_t set_to) { note_on = true; note = set_to; }
void Note::setOctave(uint8_t set_to) { octave_on = true; octave = set_to; }
void Note::setInstrument(uint8_t set_to) { instrument_on = true; instrument = set_to; }
void Note::setVolume(uint8_t set_to) { volume_on = true; volume = set_to; }

void Note::setEffect(int effect_index, Effect set_to) { 
    effects_on[effect_index] = true; 
    effects[effect_index] = set_to;
}

void Note::setEffectEffect(int effect_index, uint8_t set_to) { 
    effects_on[effect_index] = true; 
    effects[effect_index].setEffectEffect(set_to);
}

void Note::setEffectParameter(int effect_index, uint8_t set_to) { 
    effects_on[effect_index] = true; 
    effects[effect_index].setEffectParameter(set_to);
}

void Note::unsetNote() { note_on = false; }
void Note::unsetOctave() { octave_on = false; }
void Note::unsetInstrument() { instrument_on = false; }
void Note::unsetVolume() { volume_on = false; }
void Note::unsetEffect(int effect_index) { effects_on[effect_index] = false; }

#endif