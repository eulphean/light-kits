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
#include <stdio.h>

// creates instance of an RGB LED based on the pin OUTPUT below (r, g, b)
//RGB_LED led_1(3, 5, 6);
//RGB_LED led_2(9, 10, 11);

const int led1[] = {3, 5, 6};
const int led2[] = {9, 10, 11};
const int leds[] = {1, 2}; 

void setup() {
  pinMode(led1[0], OUTPUT);
  pinMode(led1[1], OUTPUT);
  pinMode(led1[2], OUTPUT);

  pinMode(led2[0], OUTPUT);
  pinMode(led2[1], OUTPUT);
  pinMode(led2[2], OUTPUT);
}

void loop() {
   // White
  setRGB(

  // White
    analogWrite(led2[0], 150);
   analogWrite(led2[1], 150);
   analogWrite(led2[2], 150);
  // Red
//  led_1.fadeUpLedTo(255,255,255,60); 
//  led_1.fadeDownLedFrom(255,0,0,60); 
//
//  // Green
//  led_1.fadeUpLedTo(0,255,0,60); 
//  led_1.fadeDownLedFrom(0,255,0,60); 
//
//  // Blue
//  led_1.fadeUpLedTo(0,0,255,60); 
//  led_1.fadeDownLedFrom(0,0,255,60); 

  // Red
//  led_2.fadeUpLedTo(255,255,255,60); 
//  led_2.fadeDownLedFrom(255,0,0,60); 
//
//  // Green
//  led_2.fadeUpLedTo(0,255,0,60); 
//  led_2.fadeDownLedFrom(0,255,0,60); 
//
//  // Blue
//  led_2.fadeUpLedTo(0,0,255,60); 
//  led_2.fadeDownLedFrom(0,0,255,60); 
}

void setRGB(int red, int green, int blue, int ledNum, int brightness) {
   analogWrite(led1[0], 150);
   analogWrite(led1[1], 150);
   analogWrite(led1[2], 150);
}




