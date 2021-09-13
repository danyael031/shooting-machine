#include <Arduino.h>
#include "ShootingControl.h"
#include "EncMotor.h"


EncMotor *defaultEncMotor;

ShootingControl::ShootingControl(){
  this->encMotor = new EncMotor(0);
  defaultEncMotor = this->encMotor;

  attachInterrupt(0, [](){defaultEncMotor->handleInterrupt(); }, RISING);
}

void ShootingControl::setup(){
  Serial.begin(9600);
    while (!Serial){;}
}

void ShootingControl::inLoop(){
  Serial.write("hola mundo!\n") ;
}


