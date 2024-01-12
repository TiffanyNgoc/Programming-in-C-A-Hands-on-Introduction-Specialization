// Write a program that reads a comma delimited CSV file with four columns and returns the average of each column in the file. Assume that the CSV files used will only contain 3 rows and 4 columns.
// Expected Output
// The CSV file looks like the one below.
// 1,5,10,30
// 19,15,10,15
// 10,4,-2,15
// You may add additional helper functions if you’d like, but your program must include the following line of code:
// string path = argv[1];
// The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
// 10 8 6 20
// Where 10 represents the average of the numbers in the first column, 8 represents the average of the numbers in the second column, etc.

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

vector<string> data;

try {
  ifstream file;
  string read;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  while (getline(file, read)) {
    stringstream ss(read);
    while (getline(ss, read, ',')) {
      data.push_back(read);
    }
  }
  file.close();
}
  
catch (exception& e) {
  cerr << e.what() << endl;
}
  
int col1 = 0;
int col2 = 0;
int col3 = 0;
int col4 = 0;
for (int i = 0; i < data.size(); i++) {
  if (i == 0 || i == 4 | i == 8) {
    col1 += stoi(data.at(i));
  }
  if (i == 1 || i == 5 | i == 9) {
    col2 += stoi(data.at(i));
  }
  if (i == 2 || i == 6 | i == 10) {
    col3 += stoi(data.at(i));
  }
  if (i == 3 || i == 7 | i == 11) {
    col4 += stoi(data.at(i));
  }
}
  
cout << col1 / 3 << " ";
cout << col2 / 3 << " ";
cout << col3 / 3 << " ";
cout << col4 / 3;

  //add code above this line
  
  return 0;
  
}
