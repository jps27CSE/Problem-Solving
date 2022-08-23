/*
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
*/

var intersection = function (nums1, nums2) {
  const set1 = new Set(nums1);
  const set2 = new Set(nums2);

  return [...set1].filter((number) => set2.has(number));
};
