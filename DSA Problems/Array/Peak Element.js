/*
Input: 
N = 3
arr[] = {1,2,3}
Possible Answer: 2
Generated Output: 1
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
If 2 is returned then the generated output will be 1 else 0
*/

class Solution {
  peakElement(arr, n) {
    let peakIndex = 0;
    let peak = arr[0];

    let i = 0;
    let j = arr.length - 1;

    while (i <= j) {
      if (arr[i] > peak) {
        peak = arr[i];
        peakIndex = i;
      }
      if (arr[j] > peak) {
        peak = arr[j];
        peakIndex = j;
      }
      i++;
      j--;
    }

    return peakIndex;
  }
}
