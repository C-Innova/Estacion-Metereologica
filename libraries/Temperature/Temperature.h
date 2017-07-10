#ifndef Temperature_h
#define Temperature_h

#include "Arduino.h"

class Temperature
{
  public:
    Temperature(int);
    int getRawData();
    int getRawData2();
    char * getFormattedData();
    char * getFormattedData2();
  private:
    int pin;
    int temperature;
    int humedad;
};

#endif
