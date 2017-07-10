#include "Arduino.h"
#include "SoilHumidity.h"

SoilHumidity::SoilHumidity(int mypin)
{
  pin = mypin;
}

int SoilHumidity::getRawData()
{
  humidity = analogRead(pin); // read the humidity the pin is giving us
  humidity = constrain(humidity, 200, 700); // make min humidity 200, max 700
  humidity = map(humidity, 200, 700, 100, 0); // map 200 to a value of 100, map 700 to 0

  return humidity; // returns a humidity from 0 to 100
}

char * SoilHumidity::getFormattedData()
{
  // -----------------------------------------------
  // Save raw data to class variable "humidity"
  // -----------------------------------------------

  getRawData();

  // -----------------------------------------------
  // Get first line to print to LCD
  // -----------------------------------------------

  char * line1;

  if (humidity < 33) {
    line1 = "HumedadSuelo (%)   "; // too dry
  }
  else if (humidity < 66) {
    line1 = "HumedadSuelo (%)   "; // just right
  }
  else {
    line1 = "HumedadSuelo (%)      "; // too wet
  }

  // -----------------------------------------------
  // Get second line to print to LCD
  // -----------------------------------------------
  char line2[16];
  itoa(humidity, line2, 10); // convert "humidity" from an int to a character in base "10"

  // -----------------------------------------------
  // Concatenate the lines to print to LCD
  // -----------------------------------------------

  char * lines = "00000000000000000000000000000000";
  strncpy(lines, line1, 16); // char to copy to, starting character, length to copy
  strncpy(lines+16, line2, 16); // char to copy to, starting character, length to copy


 return lines;
}
