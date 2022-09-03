/*
Input: heights = [1,1,4,2,1,3]
Output: 3
Explanation: 
heights:  [1,1,4,2,1,3]
expected: [1,1,1,2,3,4]
Indices 2, 4, and 5 do not match.
*/

var heightChecker = function (heights) {
  let sortedArray = [...heights].sort((a, b) => a - b);
  let count = 0;

  sortedArray.forEach((a, b) => (heights[b] !== sortedArray[b] ? count++ : 0));

  return count;
};
