#ifndef MyLCD_h
#define MyLCD_h

#include "Arduino.h"
#include "LiquidCrystal_I2C.h"

class MyLCD
{
  public:
    MyLCD();
    void init();
    void printData(char* data);
  private:
    LiquidCrystal_I2C* liquidcrystal;
};

#endif
