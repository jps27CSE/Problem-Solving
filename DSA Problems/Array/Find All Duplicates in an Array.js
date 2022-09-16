/*
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
*/

var findDuplicates = function (nums) {
  let i = 0;
  let result = [];

  if (nums.length < 2) {
    return result;
  }

  while (i < nums.length) {
    let correct = nums[i] - 1;

    if (nums[i] !== nums[correct]) {
      let temp = nums[i];
      nums[i] = nums[correct];
      nums[correct] = temp;
    } else {
      i++;
    }
  }

  for (let j = 0; j < nums.length; j++) {
    if (nums[j] !== j + 1) {
      result.push(nums[j]);
    }
  }
  return result;
};
