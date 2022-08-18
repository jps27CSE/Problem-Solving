/*
Input: arr = [0,1,0]
Output: 1
*/

var peakIndexInMountainArray = function (arr) {
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
