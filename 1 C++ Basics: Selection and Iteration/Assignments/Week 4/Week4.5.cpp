// For this assignment, you will use a nested loop to produce the unique output below.
// ....1
// ...2
// ..3
// .4
// 5
// Requirements:
// You must include two and only two loops in your code, one nested inside of another.
// You must include two and only two cout statements, one for each of your loop.

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5 - i; j++) {
      cout << ".";
    }
    cout << i << endl;
  }

  //add code above this line
  
  return 0;
  
}
