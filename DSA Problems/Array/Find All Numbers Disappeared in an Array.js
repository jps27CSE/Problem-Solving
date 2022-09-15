/*
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
*/

var findDisappearedNumbers = function (nums) {
  let i = 0;
  while (i < nums.length) {
    let correct = nums[i] - 1;

    if (nums[i] !== nums[correct]) {
      swap(nums, i, correct);
    } else {
      i++;
    }
  }

  let missing = [];

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] != index + 1) {
      missing.push(index + 1);
    }
  }

  return missing;
};

function swap(array, current, correct) {
  let temp = array[current];
  array[current] = array[correct];
  array[correct] = temp;

  return array;
}
