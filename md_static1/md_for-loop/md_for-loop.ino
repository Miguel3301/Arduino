// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS  increment
// CW Coleman 170413
int clearColor();
int one();
int two();

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 100

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()

void loop() {
  clearColor();
  one();
  two();
}


int clearColor(){
  int red = 255, green= 0, blue = 0, white = 10;
  int wait = 100;
  int led = 0;
  int i;
  
   for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 8;
    green = green + 16;
    blue = blue + 32;
    white = white + 1;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 255;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}

int one(){
  int red = 0, green= 0, blue = 0, white = 255;
  int wait = 100;
  int led = 0;
  int i;
  
   for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 8;
    green = green + 16;
    blue = blue + 32;
    white = white + 1;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 255;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}

int two(){
  int red = 0, green= 0, blue = 255, white = 0;
  int wait = 100;
  int led = 0;
  int i;
  
   for ( led = 0; led < 16; led++){  
    strip.setPixelColor(led, red, green , blue, white);
  }//end of for loop
    strip.show();
    delay(wait);
    red = red + 8;
    green = green + 16;
    blue = blue + 32;
    white = white + 1;

    if (red > 255) red = 0;
    if (green > 255) green = 0;
    if (blue > 255) blue = 0;
    if (white > 50) white = 0;
       
    if (red < 0) red = 255;
    if (green  < 0) green = 255;
    if (blue < 0) blue = 255;
    if (white  < 0 ) white = 50;
}
