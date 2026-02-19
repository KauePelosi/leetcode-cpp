/*
Q1. Concatenation of Array
Given an integer array nums of length n, you want to create an array ans of
length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n
(0-indexed). Specifically, ans is the concatenation of two nums arrays. Return
the array ans.

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]

Constraints:

n == nums.length
1 <= n <= 1000
1 <= nums[i] <= 1000
*/

#include <iostream>

int main() {
  int nums[5] = {1, 2, 3, 4, 5};
  int size_nums = sizeof(nums) / sizeof(nums[0]);
  int size = size_nums * 2;
  int ans[size];

  std::cout << "nums: ";
  for (int i = 0; i < size_nums; ++i) {
    std::cout << nums[i];
  }
  std::cout << "\n";

  for (int j = 0; j < size_nums; ++j) {
    ans[j] = nums[j];
    for (int k = size_nums; k < size_nums * 2; ++k) {
      ans[k] = nums[k - j - 1];
    }
  }

  int size_ans = sizeof(ans) / sizeof(ans[0]);
  std::cout << "ans: ";

  for (int l = 0; l < size_ans; ++l) {
    std::cout << ans[l];
  }
  return 0;
}
