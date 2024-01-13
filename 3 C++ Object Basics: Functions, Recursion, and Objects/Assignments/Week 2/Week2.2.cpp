// Write a recursive function called ListSum() that takes a vector of integers as a parameter. Then it returns the sum of all of the integers in the array.
// DO NOT edit any existing code or you will not receive credit for your work!
#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line



//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
// Expected Output
// If the ListSum() function is called with the vector elements of {1, 2, 3, 4, 5} then it will return 15.
// If the ListSum() function is called with the vector elements of {10, 12, 10, 7} then it will return 39.

// Solved Code
#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line

int ListSum(const vector<int>& nums, int index) {
    // Base case: if index is out of bounds, return 0
    if (index < 0 || index >= nums.size()) {
        return 0;
    }
    
    // Recursive case: add current element and call ListSum with the next index
    return nums[index] + ListSum(nums, index + 1);
}

int ListSum(const vector<int>& nums) {
    // Call the recursive function starting from index 0
    return ListSum(nums, 0);
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
