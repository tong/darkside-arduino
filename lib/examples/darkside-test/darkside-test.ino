
#include "darkside.h"

#define PIN 2
#define NUM_PIXELS 8

static int frameDelta = 10;

void setup() {

    #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set( clock_div_1 );
    #endif

    Serial.begin( 115200 );

    darkside_init( PIN, NUM_PIXELS );
}

void loop() {
    darkside_loop();
    //delay( frameDelta );
}
