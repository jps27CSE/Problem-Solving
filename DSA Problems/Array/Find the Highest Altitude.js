/*

Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

*/

var largestAltitude = function (gain) {
  let maxAlt = 0;
  let currentAlt = 0;

  for (let i = 0; i < gain.length; i++) {
    currentAlt += gain[i];

    maxAlt = Math.max(maxAlt, currentAlt);
  }

  return maxAlt;
};
