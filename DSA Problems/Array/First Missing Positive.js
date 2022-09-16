/*
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
*/

var firstMissingPositive = function (nums) {
  let i = 0;
  while (i < nums.length) {
    let correct = nums[i] - 1;

    if (nums[i] > 0 && nums[i] <= nums.length && nums[i] !== nums[correct]) {
      let temp = nums[i];
      nums[i] = nums[correct];
      nums[correct] = temp;
    } else {
      i++;
    }
  }

  for (let j = 0; j < nums.length; j++) {
    if (nums[j] !== j + 1) {
      return j + 1;
    }
  }

  return nums.length + 1;
};
