#include <Arduino.h>
#include "EncMotor.h"


EncMotor::EncMotor(uint8_t interrupt_pin) 
  : interrupt_pin(interrupt_pin){};


void EncMotor::setVelocity(int velocity){
  this->velocity = velocity;
}

int EncMotor::getVelocity(){
  return this->velocity;
}

void EncMotor::handleInterrupt(){
  this->encoder_counter++;
}
