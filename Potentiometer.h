#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

#include <Arduino.h>

class Potentiometer
{
private:
  byte pin;

public:
  Potentiometer(byte pin);
  void init();
  float read();
}

#endif
