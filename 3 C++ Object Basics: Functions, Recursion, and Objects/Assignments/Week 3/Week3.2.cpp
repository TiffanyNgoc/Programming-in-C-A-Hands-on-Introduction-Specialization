// Define the class Cat. The class should have a constructor but without any parameters. The constructor will generate the following attributes.
breed - "American Shorthair"
color - "black"
name - "Kiwi"
// Expected Result:
American Shorthair
black
Kiwi
// DO NOT CHANGE the existing code in main.
Cat cat;
cout << cat.breed << endl;
cout << cat.color << endl;
cout << cat.name << endl;

// Current Code:
#include <iostream>
using namespace std;

//add class definitions below this line
    

  
//add class definitions above this line

int main() {

  Cat cat;
  cout << cat.breed << endl;
  cout << cat.color << endl;
  cout << cat.name << endl;

  return 0;
  
}

// Solved Code
#include <iostream>
using namespace std;

//add class definitions below this line
    
class Cat {
public:
    string breed;
    string color;
    string name;

    // Constructor without parameters
    Cat() : breed("American Shorthair"), color("black"), name("Kiwi") {}
};

  
//add class definitions above this line

int main() {

  Cat cat;
  cout << cat.breed << endl;
  cout << cat.color << endl;
  cout << cat.name << endl;

  return 0;
  
}
