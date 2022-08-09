/*

Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

*/

var flipAndInvertImage = function (image) {
  var result = image.map((item) =>
    item.map((innerItem) => (innerItem === 1 ? 0 : 1)).reverse()
  );

  return result;
};
