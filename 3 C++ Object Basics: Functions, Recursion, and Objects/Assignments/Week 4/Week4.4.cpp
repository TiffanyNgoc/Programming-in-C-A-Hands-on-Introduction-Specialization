// You are given the following code:
#include <iostream>
using namespace std;

//add class definitions below this line

class MarbleBag {
  public:
    MarbleBag(int r, int b, int y) {
      red = r;
      blue = b;
      yellow = y;
    }

  private:
    int red;
    int blue;
    int yellow;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line
  
  MarbleBag bag(12, 8, 19);
  bag.AddRed(4);
  bag.AddBlue(12);
  bag.AddYellow(-1);
  bag.AddBlue(-3);
  cout << "There are " << bag.RedTotal() << " red marbles." << endl;
  cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
  cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
  cout << "There are " << bag.BagTotal() << " total marbles." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
// Requirements
// Create a few class functions that do the following:
AddRed - accepts an integer amount as a parameter and returns that amount plus the current number of red marbles.
AddBlue - accepts an integer amount as a parameter and returns that amount plus the current number of blue marbles.
AddYellow - accepts an integer amount as a parameter and returns that amount plus the current number of yellow marbles.
RedTotal - returns the current number of red marbles without any parameters.
BlueTotal - returns the current number of blue marbles without any parameters.
YellowTotal - returns the current number of yellow marbles without any parameters.
BagTotal - returns the total number of red, blue, and yellow marbles without any parameters.
// DO NOT EDIT the existing code in main or you will not pass the test:
MarbleBag bag(12, 8, 19);
bag.AddRed(4);
bag.AddBlue(12);
bag.AddYellow(-1);
bag.AddBlue(-3);
cout << "There are " << bag.RedTotal() << " red marbles." << endl;
cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
cout << "There are " << bag.BagTotal() << " total marbles." << endl;
// Expected Output
There are 16 red marbles.
There are 17 blue marbles.
There are 18 yellow marbles.
There are 51 total marbles.

// Solved Code
#include <iostream>
using namespace std;

//add class definitions below this line

class MarbleBag {
public:
    MarbleBag(int r, int b, int y) {
        red = r;
        blue = b;
        yellow = y;
    }

    int AddRed(int amount) {
        red += amount;
        return red;
    }

    int AddBlue(int amount) {
        blue += amount;
        return blue;
    }

    int AddYellow(int amount) {
        yellow += amount;
        return yellow;
    }

    int RedTotal() const {
        return red;
    }

    int BlueTotal() const {
        return blue;
    }

    int YellowTotal() const {
        return yellow;
    }

    int BagTotal() const {
        return red + blue + yellow;
    }

private:
    int red;
    int blue;
    int yellow;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line
  
  MarbleBag bag(12, 8, 19);
  bag.AddRed(4);
  bag.AddBlue(12);
  bag.AddYellow(-1);
  bag.AddBlue(-3);
  cout << "There are " << bag.RedTotal() << " red marbles." << endl;
  cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
  cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
  cout << "There are " << bag.BagTotal() << " total marbles." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
