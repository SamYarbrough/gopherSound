#ifndef GOPHERSOUND_SONG_H
#define GOPHERSOUND_SONG_H

#include <string>
#include <stdint.h>

#include "SongComment.h"

class Song {
private:
    char title[64]; // Song title
    char artist[32]; // Song artist
    char copyright[32]; // Song copyright

    SongComment comment; // Song comment

    uint8_t beats_per_minute_whole; // Starting BPM, integer part
    uint8_t beats_per_minute_frac; // Starting BPM, floating part
    uint8_t subdivisions_per_beat; // Number of sub-beats (eighth, sixteenth, etc.) per beat
    uint8_t beats_per_pattern; // Number of beats in one pattern

    uint8_t num_channels; // Number of total channels
};

#endif

// pattern class
// each pattern has an ID
// an array of channels

// channel class
// each channel has an occilator type
// 0-3 effects spec
// array of notes

// notes class
// each note has a tone (octave and note)
// an instrument
// a volume
// 0-3 effects in an array

// effect class
// each effect has an effect selection
// a parameter
