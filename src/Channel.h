#ifndef GOPHERSOUND_CHANNEL_H
#define GOPHERSOUND_CHANNEL_H

#include <stdint.h>
#include <vector>

#include "Note.h"

class Channel {
private:
    std::vector<Note> notes;

public:
    Channel(uint8_t);

    void setSize(uint8_t);
    uint8_t getSize();

    Note setNote(uint8_t, Note);
    Note getNote(uint8_t);
};

Channel::Channel(uint8_t num_notes) {
    for (int i = 0 ; i < num_notes; i++) {
        notes.push_back(Note());
    }
}

void Channel::setSize(uint8_t size) { notes.resize(size); }
uint8_t Channel::getSize() { return notes.size(); }

Note Channel::setNote(uint8_t note_index, Note new_note) {
    Note to_ret = notes[note_index];

    notes[note_index] = new_note;

    return to_ret;
}

Note Channel::getNote(uint8_t note_index) {
    return notes[note_index];
}

#endif
