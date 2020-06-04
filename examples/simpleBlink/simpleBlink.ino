#include <nodeMcuBlink.h>

nodeMcuBlink nBlink;
int starting=0;
float frequency;
String incomingStr;
void setup(){
Serial.begin(9600);
}

void loop(){
    if(Serial.available()>0){
        incomingStr=Serial.readString();
        if(incomingStr.indexOf("t")>-1){
         nBlink.stop();
         starting=0;
        }
    }
    else{
            frequency=incomingStr.toFloat();
            starting=1;
        }
    if(starting==1)
        nBlink.start(frequency);

}