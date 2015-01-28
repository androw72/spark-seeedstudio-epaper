/*
  ePaperDfs.h
  2013 Copyright (c) Seeed Technology Inc.  All right reserved.

  Modified by Loovee
  www.seeedstudio.com
  2013-7-2

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __EPAPERDFS_H__
#define __EPAPERDFS_H__

// pin define

typedef enum {
	DIRNORMAL,
	DIRLEFT,
	DIRRIGHT,
    DIRDOWN
} EPD_DIR;


//2015-01-27 Spark core pins
#define Pin_TEMPERATURE   A0
#define Pin_PANEL_ON      D2
#define Pin_BORDER        D3
#define Pin_DISCHARGE     D4
#define Pin_PWM           A7
#define Pin_RESET         D6
#define Pin_BUSY          D7

#define Pin_EPD_CS        D0

#define Pin_SD_CS         A2

#define Pin_OE123         D5 //tmp
#define Pin_STV_IN        A6




// spi cs

#define EPD_SELECT()        digitalWrite(Pin_EPD_CS, LOW)
#define EPD_UNSELECT()      digitalWrite(Pin_EPD_CS, HIGH)
#define SD_SELECT()         digitalWrite(Pin_SD_CS, LOW) 
#define SD_UNSELECT()       digitalWrite(Pin_SD_CS, HIGH)
#define FONT_SELECT()       digitalWrite(Pin_Font_CS, LOW) 
#define FONT_UNSELECT()     digitalWrite(Pin_Font_CS, HIGH)


#endif

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/