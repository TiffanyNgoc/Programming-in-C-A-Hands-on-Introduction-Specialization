// Your friend wrote a program called an adder. The adder is supposed to take two numbers inputted by a user and then find the sum of those numbers, but it’s behaving oddly.
// You can test the adder by using the terminal in the bottom-left panel. Once you click the TRY IT button below, the program will ask you to input two whole numbers. You need to press “Enter” or “Return” after typing each number.
// Your first task is to figure out what is wrong with the adder. Your second task is to fix it.

#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line

  int intNum1 = stoi(num1);
  int intNum2 = stoi(num2);

  int sum = intNum1 + intNum2;
  cout << intNum1 << " + " << intNum2 << " = " << sum << endl;

  //fix the code above this line
  
  return 0;
  
}
