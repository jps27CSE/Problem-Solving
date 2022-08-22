/*
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
*/

var search = function (nums, target) {
  let pivot = findPivot(nums);

  if (pivot === -1) {
    return binarySearch(nums, target, 0, nums.length - 1);
  }
  if (nums[pivot] === target) {
    return pivot;
  }

  if (target >= nums[0]) {
    return binarySearch(nums, target, 0, pivot - 1);
  } else {
    return binarySearch(nums, target, pivot + 1, nums.length - 1);
  }
};

const binarySearch = (array, target, start, end) => {
  while (start <= end) {
    const middle = Math.floor(start + (end - start) / 2);

    if (target > array[middle]) {
      start = middle + 1;
    } else if (target < array[middle]) {
      end = middle - 1;
    } else {
      return middle;
    }
  }

  return -1;
};

const findPivot = (array) => {
  let start = 0;
  let end = array.length - 1;

  while (start <= end) {
    let middle = Math.floor(start + (end - start) / 2);

    if (middle < end && array[middle] > array[middle + 1]) {
      return middle;
    } else if (middle > start && array[middle] < array[middle - 1]) {
      return middle - 1;
    } else if (array[middle] <= array[start]) {
      end = middle - 1;
    } else {
      start = middle + 1;
    }
  }
  return -1;
};
