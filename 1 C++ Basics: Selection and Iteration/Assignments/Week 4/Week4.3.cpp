// You are trying to produce a program that takes in two integer arguments from the user and then prints the consecutive sum of all numbers between those integers inclusively. For example, arguments 5 and 8 will result in a sum of 26 (5 + 6 + 7 + 8 = 26). If the integer arguments are the same value, the program will simply print that value as the sum.
// Requirements
// Declare and initialize a variable to keep tracking of your sum.
// Use any loop to find the consective sum between the integer variables a and b.
// If a and b are the same integers, then print either a or b as the sum.
// What does the if (a > b) conditional in the code do?
// The if conditional enables the program to sort the arguments from the user from smaller to larger. For example, if the user types 8 and 5, the conditional will rearrange the arguments so that a takes on the smaller argument of 5 and b takes on the larger argument of 8.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  
  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }
  
  //add code below this line

  int sum = 0;
  for (int i = a; i <= b; i++) {
    sum += i;
  }
  cout << sum << endl;

  //add code above this line
  
  return 0;
  
}
