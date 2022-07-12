/*

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.

*/

class Solution {
  kthSmallest(arr,l,r,k){

    
    let sorting =arr.sort(function(a, b) {
  return a - b;
    });
    
    return sorting[k-1]
  }
  
}