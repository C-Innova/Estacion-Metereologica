#include "Arduino.h"
#include "RainDrop.h"

RainDrop::RainDrop(int mypin)
{
  pin = mypin;
}

int RainDrop::getRawData()
{
  raindrop = analogRead(pin); // read the raindrop the pin is giving us
  raindrop = constrain(raindrop, 200, 700); // make min raindrop 200, max 700
  raindrop = map(raindrop, 200, 700, 100, 0); // map 200 to a value of 100, map 700 to 0

  return raindrop; // returns a raindrop from 0 to 100
}

char * RainDrop::getFormattedData()
{
  // -----------------------------------------------
  // Save raw data to class variable "raindrop"
  // -----------------------------------------------

  getRawData();

  // -----------------------------------------------
  // Get first line to print to LCD
  // -----------------------------------------------

  char * line1;

  if (raindrop < 33) {
    line1 = "Lluvia (%)  "; // too dry
  }
  else if (raindrop < 66) {
    line1 = "Lluvia (%) "; // just right
  }
  else {
    line1 = "Lluvia (%)    "; // too wet
  }

  // -----------------------------------------------
  // Get second line to print to LCD
  // -----------------------------------------------
  char line2[16];
  itoa(raindrop, line2, 10); // convert "raindrop" from an int to a character in base "10"

  // -----------------------------------------------
  // Concatenate the lines to print to LCD
  // -----------------------------------------------

  char * lines = "00000000000000000000000000000000";
  strncpy(lines, line1, 16); // char to copy to, starting character, length to copy
  strncpy(lines+16, line2, 16); // char to copy to, starting character, length to copy


 return lines;
}
