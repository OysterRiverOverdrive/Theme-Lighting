// Import the FastLED library so we can use it to control the lights.
#include "FastLED.h"

// Specify which digital IO port the data wire from the LED strip
// will be connected to.
#define LED_PIN  7

// Specify how many LEDs on the strip will be controlled.
#define NUM_LEDS 144

// Create a variable that will store the colors for the LEDs.
CRGB leds[NUM_LEDS];

void setup() {
  // Tell the FastLED library:
  //   * WS2812B - which type of LEDs will be controlled
  //   * LED_PIN - which pin to send out the data signal
  //   * RGB - the color order. It differs by type of LED strip
  //           and could be RGB, RBG, BRG, GBR, ...
  //   * leds - the variable that is storing all the colors
  //   * NUM_LEDS - the number of LEDs to control
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);

  // clear all pixel data
  FastLED.clear(true);

  // Set the light brightness from 0-255.  If too bright, you
  // can permanently damage the arduino, so use a small number to start.
  FastLED.setBrightness(50);
}

void loop()
{
  int static repeat = 50;
  int static pos = 0;
  int static direction = 1;

  EVERY_N_MILLISECONDS(12) {
    //FastLED.clear(true);
    if (pos == NUM_LEDS-1) {
      direction = -1;
    } else if (pos == 0) {
      direction = 1;
    }
    pos += direction;
    leds[pos] = CRGB::Blue;
  }
  {
  int static pos = 0;
  int static direction = 1;

  EVERY_N_MILLISECONDS(12) {
    //FastLED.clear(true);
    if (pos == NUM_LEDS-2) {
      direction = -1;
//      repeat--1;
    } else if (pos == 0) {
      direction = 1;
    }
    pos += direction;
    leds[pos] = CRGB::White;
    }
  }
  
  // Send the color instructions to the LED strip.
  FastLED.show();
}

 
//}
//void loop() {

  //int myNumbers[72] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40};
//for (int i : myNumbers) {
 //leds[i] = CRGB::Purple; "\n";
//}

  // Outer loop
//for (int i = 30; i <= 70; ++i) {
  //leds[i] = CRGB::Purple; // Executes 2 times

  // Inner loop
  //for (int j = 35; j <= 65; ++j) {
    //leds[j] = CRGB::Green; // Executes 6 times (2 * 3)
    
  //for (int k = 40; k <= 60; ++k) {
    //leds[k] = CRGB::Blue;
    //}
  //}
//}

  //for (int i = 0; i <= 71; i++) {
    //leds[i] = CRGB::Purple;

    //for (int i = 73; i <= 144; i++) 
    //leds[i] = CRGB::Green;
  //}

  // Set the first LED to red.
  // leds[0] = CRGB::Red;

  // Set the second LED to green.
  //leds[1] = CRGB::Orange;

  // Set the third LED to blue.
  //leds[2] = CRGB::Yellow;
  
  // Set the fourth LED to red.
  //leds[3] = CRGB::Green;

  // Set the fifth LED to red.
  //leds[4] = CRGB::Blue;
  
  // Set the sixth LED to red.
  //leds[5] = CRGB::Purple;

  // Set the seventh LED to red.
  //leds[6] = CRGB::Blue;

  // Set the eigth LED to red.
  //leds[7] = CRGB::Green;
  
  // Set the ninth LED to red.
  //leds[8] = CRGB::Yellow;

  // Set the tenth LED to red.
  //leds[9] = CRGB::Orange;

  // Set the eleventh LED to green.
  //leds[10] = CRGB::Red;
  
// Send the color instructions to the LED strip.
 // FastLED.show();
//}
