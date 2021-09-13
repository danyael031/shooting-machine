#include <Arduino.h>
#include "ShootingControl.h"

ShootingControl sc = ShootingControl();

void setup() {
  sc.setup();
}
 
void loop(){
  sc.inLoop();
}


