/*
Q1. Set Mismatch
You have a set of integers s, which originally contains all the numbers from 1
to n.
Unfortunately, due to some error, one of the numbers in s got duplicated
to another number in the set, which results in repetition of one number and loss
of another number.

You are given an integer array nums representing the data status of this set
after the error.

Find the number that occurs twice and the number that is missing and return them
in the form of an array.


Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Example 2:

Input: nums = [1,1]
Output: [1,2]


Constraints:

2 <= nums.length <= 104
1 <= nums[i] <= 104
*/

#include <iostream>

int main() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 7, 9, 10};
  int nums_size = sizeof(nums) / sizeof(nums[0]);
  int output[2];
  int duplicate = 0;

  for (int i = 0; i < nums_size; i++) {
    if (nums[i] != i + 1) {
      duplicate += nums[i];
    }
  }

  std::cout << duplicate;

  return 0;
}
