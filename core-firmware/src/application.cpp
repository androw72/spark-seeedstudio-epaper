/*
  SD card test 
   
 This example shows how use the utility libraries on which the'
 SD library is based in order to get info about your SD card.
 Very useful for testing a card when you're not sure whether its working or not.
  
 The circuit:
  * SD card attached to SPI bus as follows:
  Refer to "libraries/SdFat/Sd2Card_config.h" 

 created  28 Mar 2011
 by Limor Fried 
 modified 16 Mar 2011
 by Tom Igoe
 modified for Maple(STM32 micros)/libmaple
 17 Mar 2012
 by dinau
 */
 // include the SD library:

#include "application.h"
#include "ePaper.h"
//#include "GT20L16_drive.h"
//#include "picture.h"

// set up variables using the SD utility library functions:
Sd2Card card;
SdVolume volume;
SdFile root;

//EReader ereader;

// SOFTWARE SPI pin configuration - modify as required
// The default pins are the same as HARDWARE SPI
const uint8_t chipSelect = A2;    // Also used for HARDWARE SPI setup
const uint8_t mosiPin = A5;
const uint8_t misoPin = A4;
const uint8_t clockPin = A3;

#define EPD_SIZE    EPD_2_7
#define IMAGEFILE   image_270
//#define __AVR_ATmega32U4__
//#define __AVR_ATmega328P__ 1

//int ledControl(String command);


void setup()
{
  Serial.begin(115200);
  

  while (!Serial.available());
  
  Serial.print("\nSeedstudioEpaper...\n");
  EPAPER.begin(EPD_SIZE);
  //EPAPER.clear();
  //EPAPER.image_flash(IMAGEFILE);
  EPAPER.setDirection(DIRNORMAL);                     // set display direction
  eSD.begin(EPD_SIZE); 


  
    EPAPER.drawRectangle(10, 10, 100, 80);
    EPAPER.fillCircle(50, 50, 30);
    EPAPER.fillRectangle(50, 65, 50, 20);    
    EPAPER.drawCircle(150, 50, 25);
    EPAPER.drawCircle(150, 50, 20);
    EPAPER.drawCircle(150, 50, 15);
    EPAPER.drawCircle(150, 50, 10);
    EPAPER.fillCircle(150, 50, 5);  
    EPAPER.drawHorizontalLine(120, 50, 60);
    EPAPER.drawVerticalLine(150, 20, 60);
  
  EPAPER.display();                                   // display, you can use this function
  delay(1000);
  
}

void loop(void) {
  
}
