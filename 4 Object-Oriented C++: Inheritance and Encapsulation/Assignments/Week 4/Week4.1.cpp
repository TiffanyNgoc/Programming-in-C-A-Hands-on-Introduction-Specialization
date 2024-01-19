// You are given two files, one called exercise1.cpp, which is a main file, and one called header.h, which is a header (or class) file. Fill out the header.h file to get the expected output.
// Requirement(s)
// You CANNOT add or make any changes to the code in main, otherwise, you might not receive credit for your work!
// Given Code
main
//DO NOT EDIT///////////
                      //
#include "header.h"   //
                      //
int main() {          //
                      //
  Hello hello;        //
  hello.PrintHello(); //
                      //
  return 0;           //
                      //
}                     //
////////////////////////
header
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

//add definitions below this line



//add definitions above this line

#endif
// Expected Output
Hello

// Solved Code
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

//add definitions below this line

class Hello {
public:
    void PrintHello() {
        cout << "Hello" << endl;
    }
};

//add definitions above this line

#endif
