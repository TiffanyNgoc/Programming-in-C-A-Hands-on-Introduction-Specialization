// Write a program that takes input without white spaces from a user, prints the first half of the string on one line, and the second half on another. In the case of a string that has an odd number of characters, the second line will have the extra character.
// Here is what you have so far:
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
// Requirements
// You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You can use any number of string functions and conditionals to produce the desired output.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

 int length = my_string.length();
  int half = length / 2;

  cout << my_string.substr(0, half) << endl;

  // Handle the case of an odd number of characters
  if (length % 2 == 0) {
    cout << my_string.substr(half, half) << endl;
  } else {
    cout << my_string.substr(half, half + 1) << endl;
  }

  //add code above this line
  
  return 0;
  
}
