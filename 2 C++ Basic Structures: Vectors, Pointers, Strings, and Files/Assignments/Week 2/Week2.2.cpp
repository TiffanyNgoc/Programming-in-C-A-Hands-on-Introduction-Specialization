// You are working to create a program that takes in two double inputs, associates them with pointers, and then adds the value of the dereferenced pointers together. Finally, their sum is printed with a newline. Here is what you have so far:
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  double a;
  double b;
  double *p1;
  double *p2;
  
  cout << "Enter the first number: " << endl;
  cin >> a;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  cout << "Enter the second number: " << endl;
  cin >> b;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  
  // your code goes below
  
  
  
  // your code goes above
  
  cout << *p1 + *p2 << endl;
  
  return 0;
  
}
// When running your code, you should be asked to enter a first number and a second number in the Terminal. If you enter a non-double or non-integer, the program should print invalid and exit the program. If the inputs are valid, then the system will add the inputs together and output their sum. DO NOT make any changes to the existing code!

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  double a;
  double b;
  double *p1;
  double *p2;
  
  cout << "Enter the first number: " << endl;
  cin >> a;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  cout << "Enter the second number: " << endl;
  cin >> b;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  
  // your code goes below
  
  p1 = &a;
  p2 = &b;
  
  // your code goes above
  
  cout << "The sum is " << *p1 + *p2 << endl;
  
  return 0;
  
}
