// Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
// Output: "leetcode"
// Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.

var restoreString = function (s, indices) {
  let copyArray = new Array(indices.length);
  for (let i = 0; i < s.length; i++) {
    copyArray[indices[i]] = s[i];
  }

  return copyArray.join("");
};
