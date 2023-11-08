#ifndef GOPHERSOUND_EFFECT_H
#define GOPHERSOUND_EFFECT_H

#include <stdint.h>

class Effect {
private:
    uint8_t effect;
    uint8_t parameter;

public:
    Effect();
    Effect(uint8_t);
    Effect(uint8_t, uint8_t);

    void setEffectEffect(uint8_t);
    void setEffectParameter(uint8_t);
    void setEffect(uint8_t, uint8_t);

    uint8_t getEffectEffect();
    uint8_t getEffectParameter();
};

Effect::Effect() {
    effect = parameter = 0;
}

Effect::Effect(uint8_t spec_effect) {
    effect = spec_effect;
    parameter = 0;
}

Effect::Effect(uint8_t spec_effect, uint8_t spec_parameter) {
    effect = spec_effect;
    parameter = spec_parameter;
}

void Effect::setEffectEffect(uint8_t spec_effect) { effect = spec_effect; }
void Effect::setEffectParameter(uint8_t spec_parameter) { parameter = spec_parameter; }
void Effect::setEffect(uint8_t spec_effect, uint8_t spec_parameter) {
    effect = spec_effect; 
    parameter = spec_parameter; 
} 

uint8_t Effect::getEffectEffect() { return effect; }
uint8_t Effect::getEffectParameter() { return parameter; }

#endif