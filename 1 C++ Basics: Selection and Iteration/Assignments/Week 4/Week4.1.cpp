// Imagine that you have a Turtle object called tina. You want tina to move around on a screen and leave a trail that draws a triangle like below.
// Turtle Graphics Review
// tina.forward(n) - Where n represents the number of pixels.
// tina.backward(n) - Where n represents the number of pixels.
// tina.right(d) - Where d represents the number of degrees.
// tina.left(d) - Where d represents the number of degrees.
// tina.pencolor({"COLOR"}) - Where COLOR represents the track or line color you want tina to leave behind.
// tina.width(W) - Where W represents how wide (in pixels) tina's track is.
// tina.shape("SHAPE") - Where SHAPE represents the shape tina takes.
// tina.speed(SPEED) - Where SPEED represents how fast tina moves
// Using a for loop, direct tina to follow the exact same path as above. Your code must include the following in order for you to receive credit for your work.
// Requirements:
// tina must move exactly as shown in the graphic above.
// You must include a for loop.
// You must declare an iterating variable i and initialize it to zero (e.g. int i = 0).
// Your loop header must include i++. In other words, i gets incremented by 1 after each iteration.
// You must include the following two commands in your code:
// tina.left(120);
// tina.forward(100);

////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  tina.speed(TS_SLOWEST);
  
  //add code below this line

  for (int i = 0; i < 3; i++) {
    tina.left(120);
    tina.forward(100);
  }

  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
