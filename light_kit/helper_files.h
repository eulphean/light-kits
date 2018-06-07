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

#ifndef helper_files_h
#define helper_files_h
#include "Arduino.h"

struct RGB_LED{
  public:
    RGB_LED(int pin1, int pin2, int pin3);
    void fadeUpLedTo(int red, int green, int blue, int delay_time);
    void fadeDownLedFrom(int red, int green, int blue, int delay_time);
    
  private:
    int _pin1;
    int _pin2;
    int _pin3;
};

struct White_LED{
  public:
    White_LED(int pin);
    void fadeUpLedTo(int brightness, int delay_time);
    void fadeDownLedFrom(int brightness, int delay_time);
  
  private:
    int _pin;
};

#endif




