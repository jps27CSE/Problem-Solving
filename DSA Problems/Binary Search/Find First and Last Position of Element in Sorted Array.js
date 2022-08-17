/*

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

*/

var searchRange = function (nums, target) {
  let ans = [-1, -1];

  ans[0] = searching(nums, target, true);
  if (ans[0] != -1) {
    ans[1] = searching(nums, target, false);
  }

  return ans;
};

var searching = (nums, target, findStartIndex) => {
  let answer = -1;
  let start = 0;
  let end = nums.length - 1;

  while (start <= end) {
    let mid = Math.floor(start + (end - start) / 2);

    if (target > nums[mid]) {
      start = mid + 1;
    } else if (target < nums[mid]) {
      end = mid - 1;
    } else {
      answer = mid;

      if (findStartIndex) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
  }
  return answer;
};
