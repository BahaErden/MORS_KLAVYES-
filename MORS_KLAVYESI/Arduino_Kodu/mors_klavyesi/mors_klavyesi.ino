#include "Keyboard.h"

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif


#define LED_PIN    9
#define LED_COUNT 1

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);



int btn;
int btn_pin = 10;

int sayac = 0;
int sayac2 = 0;

int emn = 0;

String harf = "";

#include "pixel.h"
#include "harfler.h"
void setup() {
  Keyboard.begin();

#if (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif


  strip.begin();
  strip.show();
  strip.setBrightness(150);


  pinMode(btn_pin, INPUT_PULLUP);
}

void loop() {

  btn = digitalRead(btn_pin);

  if (btn == 0) { // butona basılmışsa
    led(255, 0, 0);
    sayac += 5;
    emn = 1;
    sayac2 = 0;
    delay(5);
  }
  if (btn == 1) { // butona basılmamışsa
    sayac2 += 5;
    led(0, 255, 50);
    if (sayac >= 5 && sayac < 180) {
      //Serial.println("kisa");
      harf = harf + ".";
      sayac = 0;
    }
    else if (sayac >= 180) {
      //Serial.println("uzun");
      harf = harf + "-";
      sayac = 0;
    }


    if (emn == 1 && sayac2 >= 400) {
      emn = 0;
      sayac2 = 0;
      mors();
      led(255, 255, 0);
      delay(100);
    }
    delay(5);
  }
}
