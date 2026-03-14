/*
Q2. Shuffle the Array
Given the array nums consisting of 2n elements in the form
[x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].

Example 1:

Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7]
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is
[2,3,5,4,1,7]. Example 2:

Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]
Example 3:

Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]

Constraints:

1 <= n <= 500
nums.length == 2n
1 <= nums[i] <= 10^3

*/
#include <iostream>

int main() {
  int nums[] = {7, 12, 4, 9, 1, 15, 3, 8};

  int nums_size = sizeof(nums) / sizeof(nums[0]);
  int half_nums = nums_size / 2;
  int output[nums_size];

  int j = 0;

  for (int i = 0; i < half_nums; ++i) {
    output[j] = nums[i];                 // xi
    output[j + 1] = nums[i + half_nums]; // yi
    j += 2;
  }

  for (int i = 0; i < nums_size; ++i) {
    std::cout << output[i] << "\n";
  }

  return 0;
}
