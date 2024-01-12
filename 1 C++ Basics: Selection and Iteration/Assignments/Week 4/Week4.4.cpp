// The following program (also shown in the text editor on the left) contains one or more infinite loops that prevent the program from printing the desired output.
#include <iostream>
using namespace std;

int main() {

  for (int i = 100; i <= 100; i--) {
    if (i == 0) {
      cout << "Print me!" << endl;
    }
    else {
      while (true) {
        i++;
        cout << "Don't print me!" << endl;
      }
    }
  }

  return 0;

}

// Using what you know about break statements, fix the program so that it runs, prints correctly, and terminates successfully.
// Requirements
// You cannot make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
// You need to add two and only two break; statements to the program.
// The program’s expected output is: Print me!

#include <iostream>
using namespace std;

int main() {

  for (int i = 100; i <= 100; i--) {
    if (i == 0) {
      cout << "Print me!" << endl;
      break;
    }
    else {
      while (true) {
        break;
        i++;
        cout << "Don't print me!" << endl;
      }
    }
  }

  return 0;

}
