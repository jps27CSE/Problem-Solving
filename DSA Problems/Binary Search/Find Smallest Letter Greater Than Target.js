/*

Input: letters = ["c","f","j"], target = "a"
Output: "c"

*/

var nextGreatestLetter = function (letters, target) {
  let start = 0;
  let end = letters.length - 1;

  while (start <= end) {
    var middle = Math.floor(start + (end - start) / 2);

    if (target < letters[middle]) {
      end = middle - 1;
    } else {
      start = middle + 1;
    }
  }

  if (start >= letters.length) {
    return letters[0];
  } else {
    return letters[start];
  }
};
