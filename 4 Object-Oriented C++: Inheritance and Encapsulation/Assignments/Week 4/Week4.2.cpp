// Create an enum called seasons that contains four variables: winter, spring, summer, and fall. Set up the enum variables so the code in main will print the expected output below.
// Requirement(s)
// You MUST use enum within your code in order to receive credit for this exercise.
// You CANNOT add or make any changes to the code in main, otherwise, you might not receive credit for your work!
// Given Code
#include <iostream>
using namespace std;

//add definitions below this line



//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  seasons season1 = winter;
  seasons season2 = spring;
  seasons season3 = summer;
  seasons season4 = fall;

  cout << "Winter is the " << season1 << "st season of the year." << endl;
  cout << "Spring is the " << season2 << "nd season of the year." << endl;
  cout << "Summer is the " << season3 << "rd season of the year." << endl;
  cout << "Fall is the " << season4 << "th season of the year." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
// Expected Output
Winter is the 1st season of the year.
Spring is the 2nd season of the year.
Summer is the 3rd season of the year.
Fall is the 4th season of the year.

// Solved Code
#include <iostream>
using namespace std;

//add definitions below this line

enum seasons {
    winter = 1,
    spring,
    summer,
    fall
};

//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  seasons season1 = winter;
  seasons season2 = spring;
  seasons season3 = summer;
  seasons season4 = fall;

  cout << "Winter is the " << season1 << "st season of the year." << endl;
  cout << "Spring is the " << season2 << "nd season of the year." << endl;
  cout << "Summer is the " << season3 << "rd season of the year." << endl;
  cout << "Fall is the " << season4 << "th season of the year." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
