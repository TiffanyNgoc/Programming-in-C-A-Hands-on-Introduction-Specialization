// Write a program that captures input from the user, prints the input string as many times as its length, and prints as many lines of it as the length of the input string.
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

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << my_string;
    }
    cout << endl;
  }

  //add code above this line
  
  return 0;
  
}
