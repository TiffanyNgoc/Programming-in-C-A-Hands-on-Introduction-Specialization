// Problem
// Write a program that reads a text file and returns the number of lines as well as the total number of characters in the file.
// Expected Output
// You may add additional helper functions if you’d like, but your program must include the following line of code:
// string path = argv[1];
// The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
// 4 line(s)
// 228 character(s)

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line

 ifstream inputFile(path);

  if (!inputFile.is_open()) {
    cout << "Error opening file." << endl;
    return 1;
  }

  int lineCount = 0;
  int charCount = 0;
  string line;

  while (getline(inputFile, line)) {
    lineCount++;
    charCount += line.length();
  }

  cout << lineCount << " line(s)" << endl;
  cout << charCount << " character(s)" << endl;

  inputFile.close();
  
  //add code above this line
  
  return 0;
  
}
