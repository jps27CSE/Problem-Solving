/*
Input: nums = [1,2,3,1]
Output: true
*/

var containsDuplicate = function (nums) {
  for (let i = 0; i < nums.length - 1; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] === nums[j]) {
        return true;
        break;
      }
    }
  }
  return false;
};
