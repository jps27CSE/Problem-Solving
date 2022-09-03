/*
Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
*/

var thirdMax = function (nums) {
  nums.sort((a, b) => b - a);

  let result = Array.from(new Set(nums));

  return result.length < 3 ? result[0] : result[2];
};
