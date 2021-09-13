#include <Arduino.h>
#include "ShootingControl.h"
#include "EncMotor.h"


EncMotor *defaultEncMotor;

ShootingControl::ShootingControl(){
  this->encMotor = new EncMotor(0);
  defaultEncMotor = this->encMotor;
}

void ShootingControl::setup(){
  Serial.begin(9600);
    while (!Serial){;}
}

void ShootingControl::inLoop(){
  Serial.write("hola mundo!\n") ;
}


