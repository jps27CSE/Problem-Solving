/*
Input: nums = [7,2,5,10,8], m = 2
Output: 18
Explanation:
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8],
where the largest sum among the two subarrays is only 18.
*/

const splitArray = (nums, m) => {
  let start = 0;
  let end = 0;

  for (let i = 0; i < nums.length; i++) {
    start = Math.max(start, nums[i]);
    end += nums[i];
  }

  while (start < end) {
    let mid = Math.floor(start + (end - start) / 2);

    let sum = 0;
    let piece = 1;

    nums.forEach((num) => {
      if (sum + num > mid) {
        sum = num;
        piece++;
      } else {
        sum += num;
      }
    });

    if (piece > m) {
      start = mid + 1;
    } else {
      end = mid;
    }
  }
  return end;
};
