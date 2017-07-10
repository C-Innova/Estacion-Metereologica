#include "Arduino.h"
#include "Temperature.h"
#include <dht.h>                // library for temp and humidity sensor

dht DHT;

Temperature::Temperature(int mypin)
{
  pin = mypin;
}

int Temperature::getRawData() // Lee datos de temperatura 
{
 // humidity = analogRead(pin); // read the humidity the pin is giving us
 // humidity = constrain(humidity, 200, 700); // make min humidity 200, max 700
 // humidity = map(humidity, 200, 700, 100, 0); // map 200 to a value of 100, map 700 to 0

  temperature = DHT.read11(pin); // read the humidity the pin is giving us
  temperature = DHT.temperature; // read the humidity the pin is giving us

return temperature; // returns a humidity from 0 to 100
}

int Temperature::getRawData2() // Lee datos de humedad
{
 // humidity = analogRead(pin); // read the humidity the pin is giving us
 // humidity = constrain(humidity, 200, 700); // make min humidity 200, max 700
 // humidity = map(humidity, 200, 700, 100, 0); // map 200 to a value of 100, map 700 to 0

  humedad = DHT.read11(pin); // read the humidity the pin is giving us
  humedad = DHT.humidity; // read the humedad the pin is giving us  

return humedad; // returns a humidity from 0 to 100
}

char * Temperature::getFormattedData()
{
  // -----------------------------------------------
  // Save raw data to class variable "humidity"
  // -----------------------------------------------

  getRawData();

  // -----------------------------------------------
  // Get first line to print to LCD
  // -----------------------------------------------

  char * line1;

 line1= "Temperatura (C) ";
  // -----------------------------------------------
  // Get second line to print to LCD
  // -----------------------------------------------
  char line2[16];
  itoa(temperature, line2, 10); // convert "humidity" from an int to a character in base "10"

  // -----------------------------------------------
  // Concatenate the lines to print to LCD
  // -----------------------------------------------

  char * lines = "00000000000000000000000000000000";
  strncpy(lines, line1, 16); // char to copy to, starting character, length to copy
  strncpy(lines+16, line2, 16); // char to copy to, starting character, length to copy


 return lines;
}
// ----------- Humedad --------------
char * Temperature::getFormattedData2()
{
  // -----------------------------------------------
  // Save raw data to class variable "humidity"
  // -----------------------------------------------

  getRawData2();

  // -----------------------------------------------
  // Get first line to print to LCD
  // -----------------------------------------------

  char * line1;

 line1= "HumedadAire (%)";
  // -----------------------------------------------
  // Get second line to print to LCD
  // -----------------------------------------------
  char line2[16];
  itoa(humedad, line2, 10); // convert "humidity" from an int to a character in base "10"

  // -----------------------------------------------
  // Concatenate the lines to print to LCD
  // -----------------------------------------------

  char * lines = "00000000000000000000000000000000";
  strncpy(lines, line1, 16); // char to copy to, starting character, length to copy
  strncpy(lines+16, line2, 16); // char to copy to, starting character, length to copy


 return lines;
}
