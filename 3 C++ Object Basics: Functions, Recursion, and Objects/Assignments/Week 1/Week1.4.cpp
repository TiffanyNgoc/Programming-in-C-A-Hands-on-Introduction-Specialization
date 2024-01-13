// Write a function called IsPalindrome() that takes a string as a parameter. If the string is a palindrome (a word that is spelled the same forward and backward), then the function will return a boolean of true. If the string is not a palindrome, then false is returned. Note that capitalization matters. For example, "Level" would not be considered a palindrome because uppercase "L" and lowercase "l" are not the same.
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
  cout << boolalpha << IsPalindrome(x) << endl;
}

// Solved Code
#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool IsPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
