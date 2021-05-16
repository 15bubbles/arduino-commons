#include "Potentiometer.h"

Potentiometer::Potentiometer(byte pin)
{
  this->pin = pin;
  init();
}

void Potentiometer::init()
{
  pinMode(pin, INPUT);
}

float Potentiometer::read()
{
  int resolution = 10;
  int maxReadValue = pow(2, 10);
  int maxVoltage = 5;

  float value = analogRead(pin);
  return value * (maxVoltage / maxReadValue);
}
