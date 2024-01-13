// Write a function called GetOddsEvens() that takes a string and an int vector as parameters. If the string parameter is "true", print only the even integers separated by a newline. If the string parameter is "false", print only the odd integers separated by a newline. Else, no output will be printed and you will see the default message of Command was successfully executed..
// Requirements
// You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You can use any number of functions, loops, and/or conditionals to produce the desired output.

// Existing Code:
#include <iostream>
#include <vector>
using namespace std;

//add code below this line



//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}

// Solved code
#include <iostream>
#include <vector>
using namespace std;

//add code below this line

void GetOddsEvens(string x, const vector<int>& y) {
  if (x == "true") {
    for (int num : y) {
      if (num % 2 == 0) {
        cout << num << endl;
      }
    }
  } else if (x == "false") {
    for (int num : y) {
      if (num % 2 != 0) {
        cout << num << endl;
      }
    }
  } else {
    // Default message
    cout << "Command was successfully executed." << endl;
  }
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}
