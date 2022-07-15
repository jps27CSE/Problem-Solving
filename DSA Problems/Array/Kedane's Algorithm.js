class Solution {

    maxSubarraySum(arr, N){

        
        let currentSum = arr[0]
        let maxSum = arr[0]
        
        for(let i=1;i<N;i++)
        {
            currentSum = currentSum + arr[i]
            
            if(currentSum < arr[i])
            {
                currentSum = arr[i]
            }
            
            if(currentSum > maxSum)
            {
                maxSum = currentSum
            }
        }
        return maxSum
    } 
}