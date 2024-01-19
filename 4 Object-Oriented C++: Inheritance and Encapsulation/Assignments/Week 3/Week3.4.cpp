// Create the Median class that has the function CalculateMedian that calculates the median of the integers passed to the function. Use function overloading so that this function can accept anywhere from two to five integer parameters.
// Given Code
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line



//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}

// Testing Your Code
The code in main is used to test your class definitions. DO NOT EDIT this code!
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
// Expected Output
IMPORTANT: You will need to cast the return values using (double) in order for certain doubles to print properly. Otherwise, the system will print the return values as integers which will eliminate the decimal digits. For example (5 + 2) / 2 will produce 3 while (double) (5 + 2) / 2 will produce 3.5.
3
5
7
3.5
22
10.5
0
4

// Solved Code
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line

class Median {
public:
    double CalculateMedian(int a, int b) {
        return (double)(a + b) / 2;
    }

    double CalculateMedian(int a, int b, int c) {
        vector<int> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        return (double)nums[1];
    }

    double CalculateMedian(int a, int b, int c, int d) {
        vector<int> nums = {a, b, c, d};
        sort(nums.begin(), nums.end());
        return (double)(nums[1] + nums[2]) / 2;
    }

    double CalculateMedian(int a, int b, int c, int d, int e) {
        vector<int> nums = {a, b, c, d, e};
        sort(nums.begin(), nums.end());
        return (double)nums[2];
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
