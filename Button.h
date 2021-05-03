#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button
{
private:
  byte pin;
  byte inputMode;
  byte lastReading;
  byte currentState;
  unsigned long debounceDelay;
  unsigned long lastDebounceTime = 0;

public:
  Button(byte pin, unsigned long debounceDelay = 50, byte inputMode = INPUT_PULLUP);
  void init();
  void update();
  byte getState();
  bool isPressed();
};

#endif
