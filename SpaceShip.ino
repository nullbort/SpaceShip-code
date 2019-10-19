/*
 * SpaceShip.ino
 * 
 * Copyright 2019 Chris <nullbort@gmail.com>
 * 
 * 19.10.2019
 * 
 * 
 */


#include <jled.h>

// Define LED pins
const byte outerLEDs = 1;
const byte innerLEDs = 0;

JLed leds[2] = {
  JLed(outerLEDs).Candle(5,100),
  JLed(innerLEDs).Candle(5,100)};

void setup() { }

void loop() {
    for (auto& led : leds) {led.Update();}
    delay(1);
}
