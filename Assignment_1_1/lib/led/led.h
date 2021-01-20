#ifndef led_h
#define led_h

#include "Arduino.h"

class Led
{
  public: // funksjons and variables availeble outside the library
    Led(int ledPin);            //needed to create a new led in the start of the program
    void setDigital(bool ledState); //instance to update the ledState
    
  private: //closed functions and variables
    int _ledPin;  //the pin witch the led is connected
};

#endif