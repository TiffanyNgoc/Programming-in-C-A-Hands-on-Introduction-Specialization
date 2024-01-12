// Write a program that takes in a string x from the user as an argument and then prints that information ten times using a loop.
// Requirements
// You must include a for or while loop in your code.
// You must include one and only one cout and endl statement in your code.
// For example, your output should look like this:
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// instead of this:
// 10101010101010101010

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line

  for (int i = 0; i < 10; i++) {
    cout << x << endl;
  }

  //add code above this line
  
  return 0;
  
}
