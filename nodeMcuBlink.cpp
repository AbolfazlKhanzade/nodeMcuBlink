#include "Arduino.h"
#include "nodeMcuBlink.h"

nodeMcuBlink::nodeMcuBlink(){
    _pin=2;
    pinMode(2,OUTPUT);
}
nodeMcuBlink::nodeMcuBlink(int pin){
    _pin=pin;
    pinMode(pin,OUTPUT);
}
void nodeMcuBlink::start(float delay1){
    digitalWrite(_pin,HIGH);
    delay(delay1);
    digitalWrite(_pin,LOW);
    delay(delay1);
    
}
void nodeMcuBlink::stop(){
    digitalWrite(_pin,0);
}