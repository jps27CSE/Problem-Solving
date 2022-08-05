/*

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/


var twoSum = function(nums, target) {
    let result = 0;
    let newarr= []
    
    for(let i=0;i<nums.length;i++)
        {
           for(let j=i+1;j<nums.length;j++)
               {
                   result = nums[i] + nums[j]
                   
                   if(result === target)
                       {
                           newarr.push(i)
                           newarr.push(j)
                           break
                       }
               }
            
        }
    return newarr
};