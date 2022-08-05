/*

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

*/

var runningSum = function(nums) {
    let sum = 0;
    for(let i =0;i< nums.length;i++)
        {
           sum= sum+nums[i]
            
            nums[i] = sum
            
            
        }
    
    return nums
};