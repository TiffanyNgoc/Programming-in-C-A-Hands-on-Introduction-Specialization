// Write a program that captures input from the user and swaps the letters two at a time in the string. The first two characters change places, the third and fourth characters change places, etc. Assume that the program will only take an even number of characters, otherwise, there will be an error.
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

for (int i = 0; i < my_string.length(); i++) {
  if (i % 2 == 0) {
    cout << my_string.at(i + 1);
  }
  else {
    cout << my_string.at(i - 1);
  }
}

  //add code above this line
  
  return 0;
  
}
