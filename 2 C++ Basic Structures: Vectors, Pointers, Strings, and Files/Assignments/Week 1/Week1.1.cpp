// Given the current program within the text editor to your left:
#include <iostream>
using namespace std;

int main() {
  
  string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
  //add code below this line
  
  
  
  //add code above this line
  
  return 0;
  
}
// Complete the program so that the resulting output will be:
// Pacific
// Atlantic
// Indian
// Arctic
// Southern
// Requirements
// You cannot make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You must include the array name oceans in your code so that each element of the array can be printed.
// You cannot print the individual strings Pacific, Atlantic, Indian, Arctic, and Southern in your code. Instead, refer to the array elements themselves.
// Each element should be printed with a newline.

#include <iostream>
using namespace std;

int main() {
  
  string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
  //add code below this line

  for (string ocean : oceans) {
    cout << ocean << endl;
  }

  //add code above this line
  
  return 0;
  
}
