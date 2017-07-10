#ifndef SoilHumidity_h
#define SoilHumidity_h

#include "Arduino.h"

class SoilHumidity
{
  public:
    SoilHumidity(int);
    int getRawData();
    char * getFormattedData();
  private:
    int pin;
    int humidity;
};

#endif
