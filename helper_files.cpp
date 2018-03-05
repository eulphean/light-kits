/*
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

/*  * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   
  Code by Amanda Yamasaki
  for Jan Tichy's Public Light and Space
  https://github.com/amandayamasaki
  
* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "helper_files.h"


/* * *  This is for the RGB Led * * */
RGB_LED::RGB_LED(int pin1, int pin2, int pin3){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);

  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
}
void RGB_LED::fadeUpLed(int red, int green, int blue, int delay_time){
 int x = 0;
  while (x<255){
    x += 5;
    delay(delay_time);
    analogWrite(_pin1, x);
    analogWrite(_pin2, x);
    analogWrite(_pin3, x);
    if (x >= red){
      analogWrite(_pin1, red);
    }
    if (x >= green){
      analogWrite(_pin2, green);
    }
    if (x >= blue){
      analogWrite(_pin3, blue);
    }
  }
}
void RGB_LED::fadeDownLed(int red, int green, int blue, int delay_time){
  int y= 255;
  while (y>0){
    y-=5;
    delay(delay_time);
    if (y>red){
     analogWrite(_pin1, red); 
    } else {
     analogWrite(_pin1, y);
     
    }
    if (y>green){
     analogWrite(_pin2, green); 
    } else {
     analogWrite(_pin2, y);
    }
     if (y>blue){
     analogWrite(_pin3, blue); 
    } else {
     analogWrite(_pin3, y);
    }
  }
}



/* * *  This is for the white Led * * */
White_LED::White_LED(int pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void White_LED::fadeUpLed(int brightness, int delay_time){
  for (int i=0; i<=brightness; i++){
    analogWrite(_pin, i); 
    delay(delay_time);
  }
}

void White_LED::fadeDownLed(int brightness, int delay_time){
  for (int i=brightness; i>=0; i--){
    analogWrite(_pin, i); 
    delay(delay_time);
  }
}






