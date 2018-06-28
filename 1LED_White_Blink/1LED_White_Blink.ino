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

  Author: Amay Kataria
  Date: 05/06/2018
  Description: This example lets you blink an LED at a specific 
  rate. The color of the LED is white. You can change the color
  of the LED by changing the RGB value, which is set. 
    
* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Define LED driver pins.
const int led1[] = {3, 5, 6};

// Record the last time to track the time of the LED. 
unsigned long lastTime; 

// Current LED state. 
bool ledOn = true; 

// By decreasing this number, you can make the led blink faster. 
// This is the time it's ON and then OFF. 
int blinkTime = 100; // 1 second - 1000 ms

void setup() {
  // Initialize LED1
  pinMode(led1[0], OUTPUT);
  pinMode(led1[1], OUTPUT);
  pinMode(led1[2], OUTPUT);

  // Record starting time. 
  lastTime = millis(); 
}

void loop() {
  unsigned long currentTime = millis(); 

  // LED should be white and blinking every *blinkTime seconds*.  
  if (currentTime - lastTime < blinkTime) {
    if (ledOn) {
      setRGBColor(255, 255, 255);
    } else {
      setRGBColor(0, 0, 0);
    }
  } else {
    lastTime = millis(); // Reset time. 
    ledOn = !ledOn; // Change the ledState. 
  }
}

// LED1 color setter
void setRGBColor(int red, int green, int blue) {
   analogWrite(led1[0], red);
   analogWrite(led1[1], green);
   analogWrite(led1[2], blue);
}

