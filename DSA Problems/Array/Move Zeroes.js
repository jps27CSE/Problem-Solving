/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

var moveZeroes = function (nums) {
  let counter = 0;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === 0) {
      counter++;
    } else if (counter > 0) {
      let temp = nums[i];
      nums[i] = 0;
      nums[i - counter] = temp;
    }
  }

  return nums;
};
