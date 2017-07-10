#ifndef RainDrop_h
#define RainDrop_h

#include "Arduino.h"

class RainDrop
{
  public:
    RainDrop(int);
    int getRawData();
    char * getFormattedData();
  private:
    int pin;
    int raindrop;
};

#endif
