// Write a program that:
// Declares an int variable called my_int.
// Initializes it to the value of first_num.
// Prints the value of my_int.
// Re-assigns it to the value of second_num.
// Prints the value of my_int.
// Re-assigns it to the value of third_num
// Prints the value of my_int.
// To test your code, first COMPILE it and then check the output of a few different test cases below:

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int first_num = atoi((argv[1]));
  int second_num = atoi((argv[2]));
  int third_num = atoi((argv[3]));
  
  //add code below this line

  int my_int = first_num;
  cout << my_int << endl;
  my_int = second_num;
  cout << my_int << endl;
  my_int = third_num;
  cout << my_int << endl;

  //add code above this line
  
  return 0;
  
}
