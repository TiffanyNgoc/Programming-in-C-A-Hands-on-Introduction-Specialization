// Write a program that accepts input from the user and creates another string that contains either a u, l, or - for each character of the original string. Use u when the character is uppercase, and use l when the character is lowercase. If the character is neither uppercase nor lowercase, use -. Print the original string first, then print the modified string.
// Here is what you have so far:
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
// Examples
// If the user inputs cat, then the output will be:
// cat
// lll
// If the user inputs HouSE, then the output will be:
// HouSE
// ulluu
// Requirements
// You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You can use any number of string functions and conditionals to produce the desired output.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line

for (char ch : original) {
  if (isupper(ch)) {
    modified += 'u';
  }
  else if (islower(ch)) {
    modified += 'l';
  }
  else {
    modified += '-';
  }
}
    
cout << original << endl;
cout << modified << endl;

  //add code above this line
  
  return 0;
  
}
