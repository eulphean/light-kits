# light-kits
C++ files for an Arduino light kit to be used for the School of the Art Institute of Chicago's Art and Technology Department to teach the basics of hardware / code to undergraduate and graduate students.   

***

## Install steps (for Students):
1. Download the whole repository using the green *download or clone button* 
2. Open the whole folder in Arduino (make sure the folder that contains everything is called *light_kit*)
3. <b>You would only be writing code in the *light_kit.ino file* </b> - the other files were written to make things a lot easier, and will be working their <b>magic</b> from behind the scenes.
   (Also, if you are prompted to create a new folder, make sure both the *.cpp* and the *.h* file are in the same folder as the *.ino* file!)  

***

## How it Works (for Students):
Now for the code! We can go through it together...
Your *.ino* file should look something like this, and will be the <b>only</b> file you should be writing in -
(the // indicates a comment.  I left these sprinkled in so y'all could have a better idea of whats happening, but the Arduino itself can't read them, so feel free to write your own notes in a similar fashion.)

```C++
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
  
  led_1.fadeUpLed(0,0,100,50); 
  led_1.fadeDownLed(0,0,100,100); 

}
```


Ignore the first two lines (below) - we don't need to worry about these... They're just letting the code know to use the two other files that are working the magic. 
```C++
#include "helper_files.h"
#include <stdio.h>
```


The next line (below) is <b>important</b>. 
```C++
RGB_LED led_1(3,5,6);
```
We are __calling a class__ to create a __new instance of *RGB_LED* that we are naming *led_1*__
We are then __passing in three pins *(redpin, greenpin, bluepin)*__.

A good metaphor for this would be to think about it like a recipe.  In the .cpp files and the .h files, I wrote the recipe for an RGB_LED.  In the .ino file, you are just calling the recipe, and adding in your own special sauce to customize your LED.  You can say *RGB_LED thisIsMySpecialLED(1,2,3)* and it would create an RGB_LED called thisIsMySpecialLED that has its red pin as 1, its green pin as 2 and its blue pin as 3.  

We can ignore the next lines (below) - we need this for more basic Arduino programming, but the magic for the setup are in the other files. 
```C++
void setup() {
  
}
```

Now for the real action!
In the void loop(), this code repeats itself over and over again and is native to Arduino. 
```C++
void setup() {
  led_1.fadeUpLed(0,0,100,50); 
  led_1.fadeDownLed(0,0,100,100); 
}
```
__Remember the instance of *RGB_LED* we made above called *led_1*?__
Now we are putting it into action. 
We are calling our instance of RGB_LED by stating its name (led_1), and attaching the action (or method) we are trying to have it execute - its sort of like plain non-code-y English, we are telling led_1 to fade up to a color, and fade down from that color to black and to repeat.  

Right now, we have the ability to use:
```C++
.fadeUpLed()
.fadeDownLed()
```
And we are passing in four values to it.
the first three stand for __red__, __green__ and __blue__, and the last is for the __delay time__, or the amount of time it would take to fade up to the specific RGB color you have.  If you wanted it to be instantaneous, pass in 0. I will continue to add methods and write more documentation for the new ones!)

The final result should be something like we see above, where we have - 
<br>__thisIsMySpecialLED.fadeUpLed(red_value, green_value, blue_value, delay);__


aaaaaand thats it!
<br>Create more LEDs by repeating these steps and calling them in the void loop(); 
<br>Happy coding.  Feel free to submit questions through this, and I'll try my best to get back to you. 

-- Amanda Yamasaki



***


## How it Works (for TAs && (advanced Students)):






