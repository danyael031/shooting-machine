#pragma once
#include "EncMotor.h"


struct Error{
  int errorCode;
};

class ShootingControl{
  private:
    EncMotor *encMotor;
  public:
    ShootingControl();
    static void handleTachometerInterrupt();
    void inLoop();
    void setup();
};


