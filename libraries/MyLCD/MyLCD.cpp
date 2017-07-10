#include "Arduino.h"
#include "MyLCD.h"

// #include <dht.h>

#define I2C_ADDR          0x3F
#define BACKLIGHT_PIN      3
#define En_pin             2
#define Rw_pin             1
#define Rs_pin             0
#define D4_pin             4
#define D5_pin             5
#define D6_pin             6
#define D7_pin             7

LiquidCrystal_I2C      intializedlcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);

// dht DHT;

MyLCD::MyLCD()
{
}

void MyLCD::init()
{

  // set our object pointer variable to the initialized LCD
  // now "liquidcrystal" can be accessed from anywhere in this class
  liquidcrystal = &intializedlcd;

  //Define the LCD as 16 column by 2 rows
  liquidcrystal->begin (16, 2);

  //Switch on the backlight
  liquidcrystal->setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  liquidcrystal->setBacklight(HIGH);

}

void MyLCD::printData(char* data)
{
  // clear screen


   liquidcrystal->setCursor(0, 0);
   liquidcrystal->print("                ");
   liquidcrystal->setCursor(0, 1);
   liquidcrystal->print("                ");

  // -----------------------------------------------
  // Separate out one string into two lines
  // -----------------------------------------------
  char line1[16];
  strncpy(line1, data+0, 16); // char to copy to, starting character, length to copy
  char line2[16];
  strncpy(line2, data+16, 16);

  // -----------------------------------------------
  // Print both data lines to the LCD screen
  // -----------------------------------------------
  liquidcrystal->setCursor(0, 0);
  liquidcrystal->print(line1);
  liquidcrystal->setCursor(0, 1);
  liquidcrystal->print(line2);


}
