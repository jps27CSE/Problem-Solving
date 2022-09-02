/*
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
*/

var sortArrayByParity = function (nums) {
  let evenNumber = nums.filter((num) => num % 2 == 0);
  let oddNumber = nums.filter((num) => num % 2 !== 0);

  let newArray = evenNumber.concat(oddNumber);

  return newArray;
};
