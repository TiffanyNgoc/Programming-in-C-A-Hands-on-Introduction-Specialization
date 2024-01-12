// You are writing a program that adds three string arguments into a vector called reverse.
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line

  

  //add code above this line
  
  for (auto a : reverse) {
    cout << a << endl;
  }
  
  return 0;
  
}
// Then you want to modify the string arguments so that they are printed in reverse order. For example, if the three string arguments are one, two, and three, then the program will print:
// three
// two
// one
// Requirements
// You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You can use any number of vector functions to modify reverse so that the arguments print in reverse order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line

  std::reverse(reverse.begin(), reverse.end());

  //add code above this line
  
  for (auto a : reverse) {
    cout << a << endl;
  }
  
  return 0;
  
}
