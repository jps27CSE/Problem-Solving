/*
Input:
N = 5
A[] = {1,2,3,5}
Output: 4
*/

class Solution {
  MissingNumber(array, n) {
    //code here
    let total = (n * (n + 1)) / 2;
    let sum = 0;

    for (let i = 0; i < array.length; i++) {
      sum += array[i];
    }

    let missing = total - sum;

    return missing;
  }
}
