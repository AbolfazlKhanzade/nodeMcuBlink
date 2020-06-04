#ifndef nodeMcuBlink_h
#define nodeMcuBlink_h

#include "Arduino.h"

class nodeMcuBlink
{
    public:
        nodeMcuBlink();
        nodeMcuBlink(int pin);
        void start(float delay1);
        void stop();
    private:
        int _pin;
        
};
#endif