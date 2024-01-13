// Write a recursive function called ReverseString() that takes a string as a parameter. Then it returns the string in reverse order.
// DO NOT edit any existing code or you will not receive credit for your work!
#include <iostream>
using namespace std;

//add function definitions below this line



//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}

// Expected Output
// If the function call is ReverseString("cat"), then the function will return tac.
// If the function call is ReverseString("house"), then the function will return esuoh.

// Solved Code
#include <iostream>
using namespace std;

//add function definitions below this line

string ReverseString(string str) {
    // Base case: if the string is empty or has only one character, return itself
    if (str.length() <= 1) {
        return str;
    }

    // Recursive case: reverse the substring excluding the first character,
    // then concatenate the first character at the end
    return ReverseString(str.substr(1)) + str[0];
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
