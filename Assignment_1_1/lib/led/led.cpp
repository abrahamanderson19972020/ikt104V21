#include "Arduino.h"
#include "led.h"
Led::Led(int ledPin) //new instance for the led
{
    _ledPin = ledPin;           //add the ledPin variable to a privat variable
    pinMode(ledPin, OUTPUT);    //set the pin to output
    digitalWrite(_ledPin, LOW); //set the pin low in case the bit was set to 1 from before
}
void Led::setDigital(bool ledState)    //set ledState //called setdigital to make room for setanalog in the future
{
    if(ledState == 1) digitalWrite(_ledPin, HIGH);      //if the update ledstate = 1 set the ledPin HIGH/1
    else if(ledState == 0) digitalWrite(_ledPin, LOW);  //if the update ledstate = 0 set the ledPin LOW/0
}