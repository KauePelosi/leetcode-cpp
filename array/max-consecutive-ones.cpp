/*
Q3. Max Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1's in the
array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
The maximum number of consecutive 1s is 3. Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2


Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/

#include <iostream>

int main() {
  int nums[] = {1, 1, 0, 1, 1, 1};
  int nums_size = sizeof(nums) / sizeof(nums[0]);

  int current = 0;
  int max = 0;

  for (int i : nums) {
    if (i == 1) {
      current++;
      if (current > max) {
        max = current;
      }
    } else {
      current = 0;
    }
  }

  std::cout << "Max consecutives ones: " << max << "\n";

  return 0;
}
