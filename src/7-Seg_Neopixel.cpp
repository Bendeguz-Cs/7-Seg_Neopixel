/*
  7-Seg_Neopixel.cpp - library for custom 7-Segment displays using NeoPixels.
  Created by Csermendy Bendeguz, April 22, 2025.
  MIT License
*/

#include "Arduino.h"
#include "7_Seg_Neopixel.h"

#include <Adafruit_NeoPixel.h>

7_Seg_Neopixel::7_Seg_Neopixel(byte LED_PIN, byte LED_COUNT) {
  Adafruit_NeoPixel NeoPixels(LED_COUNT, LED_PIN, NEO_RGB + NEO_KHZ800); // initializing of the NeoPixel LEDs
  
}

void 7_Seg_Neopixel::begin() {
  strip.begin();           // INITIALIZE NeoPixel
  strip.show();            // Turn OFF all pixels
  
}

void 7_Seg_Neopixel::displayNumber(byte number, byte color) {
  
  
}
