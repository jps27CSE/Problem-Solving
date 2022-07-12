/*

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
  
    long long maxSubarraySum(int arr[], int n){
        
 
        
        int currentSum = arr[0];
        int maxSum = arr[0];
        
        for(int i=1;i<n;i++)
        {
            
            currentSum = currentSum + arr[i];
            
           
            if(currentSum < arr[i])
            {
                currentSum = arr[i];
            }
            
            if(currentSum > maxSum)
            {
                maxSum = currentSum;
            }
           
            
        }
        
        return maxSum;
    }
};



int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
