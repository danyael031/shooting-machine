#pragma once
#include <Arduino.h>

class EncMotor{
  private:
    uint8_t interrupt_pin;
    int velocity = 0;
    volatile int encoder_counter=0;
    uint8_t codewheel_indents=0;
  public:
    EncMotor(uint8_t interrupt_pin);
    void setVelocity(int velocity);
    int getVelocity();
    void handleInterrupt();
};
