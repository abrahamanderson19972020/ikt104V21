#include <Arduino.h>
#include "led.h"
Led led1(D13);                      //create a led on pin D13
void setup() {
  Serial.begin(9600);               //set up the serial port for 9600 bit rate
}
//the red light have a Vd at 1.85 to 2.5v 20mA
//3.3-2.3V = 1v R = 1/0,02 = 50ohm the closest value is 47ohm
//https://www.arduino.cc/en/Hacking/libraryTutorial
void loop() {
  if (Serial.available() > 0){      //check if there is any serial information availeble
    char i = Serial.read();         //read the serial byte
    if (i == '0'){                  //check if the byte is a 0 in ascii value
      led1.setDigital(0);                  //if true send a 0 to the led library
      //Serial.println("led is off"); //write information in serial console
    }                               //end if statement
    else if (i == '1'){             //check if the byte is a 1 in ascii value
      led1.setDigital(1);                  //if true send a 1 to the led library
      //Serial.println("led is on");  //write information in serial console
    }                               //end if statement
  }                                 //end if statement
}