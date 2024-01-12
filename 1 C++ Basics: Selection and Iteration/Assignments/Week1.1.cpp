// Write a program that:
// Declares a boolean variable called my_bool.
// Initializes it to the boolean value of true.
// Prints the value of my_bool.
// Re-assigns my_bool to the value of test.
// Prints the value of my_bool.
// Remember that the print value of true is 1 and the print value of false is 0. You should NOT use boolalpha << in your code!

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  bool test = atoi((argv[1]));
  
  //add code below this line

  bool my_bool = true;
  cout << my_bool << endl;
  my_bool = test;
  cout << my_bool;

  //add code above this line
  
  return 0;
  
}
