/*
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/

var findPeakElement = function (arr) {
  var start = 0;
  var end = arr.length - 1;

  while (start < end) {
    var middle = Math.floor(start + (end - start) / 2);

    if (arr[middle] > arr[middle + 1]) {
      end = middle;
    } else {
      start = middle + 1;
    }
  }
  return start;
};
