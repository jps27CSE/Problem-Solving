/*

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

*/

var merge = function (nums1, m, nums2, n) {
  while (n) {
    nums1[m++] = nums2[--n];
  }

  return nums1.sort((a, b) => a - b);
};
