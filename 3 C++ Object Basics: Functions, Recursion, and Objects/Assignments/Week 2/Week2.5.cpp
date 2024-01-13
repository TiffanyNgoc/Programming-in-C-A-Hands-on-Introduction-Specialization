// Problem
// Write a recursive function called GetMax() that takes a vector of integers as a parameter. Then it returns the largest integer in the array.
// DO NOT edit any existing code or you will not receive credit for your work!
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line



//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}

// Expected Output
// If the GetMax() function is called with the vector elements of {1, 2, 3, 4, 5} then it will return 5.
// If the GetMax() function is called with the vector elements of {11, 22, 3, 41, 15} then it will return 41.

// Solved Code
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line

int GetMax(const vector<int>& nums, int index) {
    // Base case: if there's only one element left, return that element
    if (index == 0) {
        return nums[0];
    }

    // Recursive case: get the maximum of the current element and the maximum
    // of the rest of the elements
    return max(nums[index], GetMax(nums, index - 1));
}

int GetMax(const vector<int>& nums) {
    // Check if the vector is empty
    if (nums.empty()) {
        cerr << "Vector is empty." << endl;
        exit(1);
    }

    // Call the recursive function starting from the last index
    return GetMax(nums, nums.size() - 1);
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}
