/*
Input: nums = [1,3,4,2,2]
Output: 2
*/

var findDuplicate = function (nums) {
  let i = 0;
  while (i < nums.length) {
    let correct = nums[i] - 1;

    if (nums[i] !== nums[correct]) {
      swap(nums, i, correct);
    } else {
      i++;
    }
  }

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] !== index + 1) {
      return nums[index];
    }
  }
};

function swap(array, current, correct) {
  let temp = array[current];
  array[current] = array[correct];
  array[correct] = temp;

  return array;
}
