#include "Button.h"

Button::Button(byte pin, unsigned long debounceDelay, byte inputMode)
{
  this->pin = pin;
  this->inputMode = inputMode;
  this->debounceDelay = debounceDelay;
  lastReading = HIGH;
  currentState = HIGH;
  init();
}

void Button::init()
{
  pinMode(pin, inputMode);
}

void Button::update()
{
  byte newReading = digitalRead(pin);

  if (newReading != lastReading)
  {
    lastDebounceTime = millis();
  }

  if (millis() - lastDebounceTime > debounceDelay)
  {
    currentState = newReading;
  }

  lastReading = newReading;
}

byte Button::getState()
{
  update();
  return currentState;
}

bool Button::isPressed()
{
  return getState() == LOW;
}
