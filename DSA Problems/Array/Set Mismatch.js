/*
Input: nums = [1,2,2,4]
Output: [2,3]
*/

var findErrorNums = function (nums) {
  let i = 0;
  let result = [];
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

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] !== index + 1) {
      result.push(nums[index]);
      result.push(index + 1);
    }
  }

  return result;
};
