// Write a recursive function called BunnyEars() that takes the number of bunnies (an integer) as a parameter. Then it returns the number of bunny ears (2 per bunny). Use addition instead of multiplication in your code.
// DO NOT edit any existing code or you will not receive credit for your work!
#include <iostream>
using namespace std;

//add function definitions below this line



//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}

// Expected Output
// If the function call is BunnyEars(8), then the function will return 16.
// If the function call is BunnyEars(1), then the function will return 2.

// Solved Code
#include <iostream>
using namespace std;

//add function definitions below this line

int BunnyEars(int bunnies) {
    // Base case: if there are no bunnies, return 0 ears
    if (bunnies == 0) {
        return 0;
    }

    // Recursive case: add 2 ears for the current bunny and call BunnyEars with one less bunny
    return 2 + BunnyEars(bunnies - 1);
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}
