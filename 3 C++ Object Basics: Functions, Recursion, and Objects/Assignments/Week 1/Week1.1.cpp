// Write a function called GetAvg() that takes two double parameters and returns the average of these two parameters as a double. If either of the parameters is not a double or an integer, the program will catch the exception and print One or more invalid arguments..
// Requirements
// You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You can use any number of functions, loops, and/or conditionals to produce the desired output.

//Existing Code:
#include <iostream>
#include <vector>
using namespace std;

//add code below this line



//add code above this line

int main(int argc, char** argv) {
  try {
    double x = stod(argv[1]);
    double y = stod(argv[2]);
    cout << GetAvg(x, y) << endl;
  }
  catch (invalid_argument& e) {
    cout << "One or more invalid arguments." << endl;
  }
  return 0;
}

// Solved Code
#include <iostream>
#include <vector>
using namespace std;

//add code below this line

double GetAvg(double x, double y){
  double avg = (x + y) / 2;
  return avg;
}

//add code above this line

int main(int argc, char** argv) {
  try {
    double x = stod(argv[1]);
    double y = stod(argv[2]);
    cout << GetAvg(x, y) << endl;
  }
  catch (invalid_argument& e) {
    cout << "One or more invalid arguments." << endl;
  }
  return 0;
}
