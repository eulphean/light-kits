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
RGB_LED led_1(3,5,6);


void setup() {
  
}

void loop() {
  // call the LED you made by putting the led name and the method (action) attached to it
  // should be like myLEDname.thisIsTheAction()
  // pass in (red value, green value, blue value, delay time)
  // if you pass in 0 as delay time, it will just set that color static without fade
  
  led_1.fadeUpLedTo(255,0,0,50); 
  delay(50);
  led_1.fadeDownLedFrom(255,0,0,100); 
  delay(50);

  led_1.fadeUpLedTo(0,255,0,50); 
  delay(50);
  led_1.fadeDownLedFrom(0,255,0,100); 
  delay(50);

  led_1.fadeUpLedTo(0,0,255,50); 
  delay(50);
  led_1.fadeDownLedFrom(0,0,255,100); 
  delay(50);

}





