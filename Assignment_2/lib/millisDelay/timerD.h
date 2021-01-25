#ifndef Timer_h
#define Timer_h

#include "Arduino.h"

class Timer
{
  public: // funksjons and variables availeble outside the library
    Timer(int startMillis, int delayMillis);  //add a timer
    void setTimer(int startMillis, int delayMillis); //change timer
    bool on();  //check timer
    
  private: //closed functions and variables
    unsigned long _timer; 
    unsigned long long _delayMillis;
};

#endif