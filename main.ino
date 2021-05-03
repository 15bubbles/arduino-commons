#include "Led.h"
#include "Button.h"

#define LED_PIN 6
#define BUTTON_PIN 5

Led led(LED_PIN);
Button button(BUTTON_PIN);

void setup()
{
}

void loop()
{
  if (button.isPressed())
  {
    led.on();
  }
  else
  {
    led.off();
  }
}
