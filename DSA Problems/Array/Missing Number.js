/*
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
*/

var missingNumber = function (nums) {
  let sortedArray = nums.sort((a, b) => a - b);

  let start = 0;
  let end = nums.length;

  while (start < end) {
    let middle = Math.floor(start + (end - start) / 2);

    if (sortedArray[middle] > middle) {
      end = middle;
    } else {
      start = middle + 1;
    }
  }
  return start;
};
