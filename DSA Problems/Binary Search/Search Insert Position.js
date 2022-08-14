/*

Input: nums = [1,3,5,6], target = 5
Output: 2


Input: nums = [1,3,5,6], target = 7
Output: 4

*/

var searchInsert = function (nums, target) {
  let start = 0;
  let end = nums.length - 1;

  while (start <= end) {
    var mid = Math.floor(start + (end - start) / 2);

    if (target > nums[mid]) {
      start = mid + 1;
    } else if (target < nums[mid]) {
      end = mid - 1;
    } else {
      return mid;
    }
  }

  if (start === end) {
    return start;
  } else if (target <= nums[start]) {
    return start;
  } else {
    return start;
  }
};
