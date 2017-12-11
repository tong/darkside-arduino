
#ifndef DARKSIDE_H_
#define DARKSIDE_H_

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

/*
void darkside_init( int pin, int numPixels );
void darkside_dispose();
//void darkside_setColor( uint32_t color );
void darkside_setColor( uint8_t r, uint8_t g, uint8_t b );
void darkside_loop();

//uint8_t darkside_getBrightness();
//void darkside_setBrightness( uint8_t v  );
*/

class Darkside : public Adafruit_NeoPixel {
    public:
        Darkside( int pixels, int pin );
        void color( uint32_t color );
        void color( uint8_t r, uint8_t g, uint8_t b );
    private:
        //Adafruit_NeoPixel light;
        //int _pin;
};


#endif // DARKSIDE_H_
