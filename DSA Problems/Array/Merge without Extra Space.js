/*

Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
Explanation: Since you can't use any
extra space, modify the given arrays
to form
arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}

*/

class Solution {
    
    merge(arr1, arr2, N, M)
    {
        //your code here
        
        arr1.push(...arr2)
        
        arr1.sort((a,b)=>a-b)
        
        return arr1
    }
}