
#include "Arduino.h"
#include "Darkside.h"



Darkside::Darkside(int pixels, int pin) : Adafruit_NeoPixel( pixels, pin, NEO_GRB + NEO_KHZ800 ) {
    //light = Adafruit_NeoPixel( pixels, pin, NEO_GRB + NEO_KHZ800 );
    //light.begin();
    /*
    begin();
    for( int i = 0; i < 16; i++ ) {
        setPixelColor( i, 0, 0, 255 );
    }
    show();
    */
}

void Darkside::color( uint32_t value ) {
    begin();
    for( int i = 0; i < numLEDs; i++ ) {
        setPixelColor( i, value );
    }
    show();
}

void Darkside::color( uint8_t r, uint8_t g, uint8_t b ) {
    begin();
    for( int i = 0; i < numLEDs; i++ ) {
        setPixelColor( i, r, g, b );
    }
    show();
}


/*
int pin;
int numPixels;
bool initialized = false;
Adafruit_NeoPixel light;

uint8_t brightness = 255;
uint8_t color = 255;

static void writeError( uint8_t code ) {
    Serial.write( code );
}

void darkside_init( int _pin, int _numPixels ) {

    pin = _pin;
    numPixels = _numPixels;

    light = Adafruit_NeoPixel( numPixels, pin, NEO_GRB + NEO_KHZ800 );
    light.begin();

    darkside_setColor( 255, 0, 0 );
    delay(200);
    darkside_setColor( 0, 255, 0 );
    delay(200);
    darkside_setColor( 0, 0, 255 );
    delay(200);
    darkside_setColor( 255, 255, 255 );
    //light.show();
}

/*
void darkside_setColor( uint32_t value ) {
    light.begin();
    for( int i = 0; i < numPixels; i++ ) {
        //light.setPixelColor( i, value, value, value );
        light.setPixelColor( i, value );
    }
    light.show();
}
* /

void darkside_setColor( uint8_t r, uint8_t g, uint8_t b ) {
    light.begin();
    for( int i = 0; i < numPixels; i++ ) {
        light.setPixelColor( i, r, g, b );
    }
    light.show();
}

void darkside_loop() {

    /*
    if( !initialized ) {
    }
    * /

    int color[3];
    int bytesReceived = 0;
    while( bytesReceived < 3 ) {
        int available = Serial.available();
        if( available > 0 ) {
            color[bytesReceived] = Serial.read();
            bytesReceived++;
        }
    }
    //Serial.println( color[0] );
    //Serial.println( color[1] );
    //Serial.println( color[2] );
    darkside_setColor( color[0], color[1], color[2] );

    /*
    int available = Serial.available();

    if( available > 0 ) {

        int color[3];
        int bytesReceived = 0;
    	while( bytesReceived < 3 ) {
            color[bytesReceived] = Serial.read();
			bytesReceived++;
        }

        //Serial.println( color[0] );
        //Serial.println( color[1] );
        //Serial.println( color[2] );

        darkside_setColor( color[0], color[1], color[2] );

    } else {
        /*
        light.begin();
        for( int i = 0; i < numPixels; i++ ) {
            light.setPixelColor( i, 0, 0, 255 );
        }
        light.show();
    }
    * /
}
*/
