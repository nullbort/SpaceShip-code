#include <jled.h>

// Candle on LED pin 13 (PWM capable). 
auto led = JLed(13).Candle();

void setup() { }

void loop() {
  led.Update();
}

/*
 *
 *JLed leds[5] = {
    JLed(3).Breathe(2000).Forever(),
    JLed(4).Blink(750, 250).Forever(),
    JLed(5).FadeOff(1000).Forever(),
    JLed(6).FadeOn(1000).Forever(),
    JLed(LED_BUILTIN).Blink(500, 500).Forever()};

void setup() {
}

void loop() {
    for (auto& led : leds) {led.Update();}
    delay(1);
}/*
