# spark-seeedstudio-epaper
A seeed-studio epaper library ported to spark-core

SD card library for spark: https://github.com/technobly/SparkCore-SD  

note! This code is only tested on the repaper development board from adafruit. The seeedstudio epaper shield has a different tempsensor and a added character chip. The code for the tempsensor is altered and a fix value of 25 degrees is therfore used in function 'void ePaper::start()'.

//2015-01-27 Spark core pins  
define Pin_TEMPERATURE   A0  
define Pin_PANEL_ON      D2  
define Pin_BORDER        D3  
define Pin_DISCHARGE     D4  
define Pin_PWM           A7  
define Pin_RESET         D6  
define Pin_BUSY          D7  

define Pin_EPD_CS        D0  

define Pin_SD_CS         A2  

define Pin_OE123         D5 //tmp  
define Pin_STV_IN        A6  
