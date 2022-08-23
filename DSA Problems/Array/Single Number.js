/*
Input: nums = [2,2,1]
Output: 1
*/

var singleNumber = function (nums) {
  let sortedArray = nums.sort((a, b) => a - b);

  if (nums.length === 1) {
    return nums;
  }

  for (let i = 0; i < nums.length; i += 2) {
    if (
      sortedArray[i] !== sortedArray[i + 1] &&
      sortedArray[i + 1] === sortedArray[i + 2]
    ) {
      return sortedArray[i];
    }
  }
};
