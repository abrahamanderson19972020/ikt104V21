#include "Arduino.h"
#include "led.h"
Led::Led(int ledPin) //new instance for the led
{
    _ledPin = ledPin;           //add the ledPin variable to a privat variable
    pinMode(ledPin, OUTPUT);    //set the pin to output
    //digitalWrite(_ledPin, LOW); //set the pin low in case the bit was set to 1 from before
}
void Led::setDigital(bool ledState)    //set ledState
{
    if(ledState == 1) digitalWrite(_ledPin, HIGH);      //if the update ledstate = 1 set the ledPin HIGH/1
    else if(ledState == 0) digitalWrite(_ledPin, LOW);  //if the update ledstate = 0 set the ledPin LOW/0
}
void Led::setPWM(int ledState)    //set ledState
{
    ledState = constrain(ledState,0 , 255); //constrict led value from 0 to 255
    ledState = _gamma[ledState]; //correct brightness for eye sensetivity (gamma correction)
    analogWrite(_ledPin, ledState);      //set pwm from 0 to 255
}