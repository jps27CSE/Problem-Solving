/*
Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 
Explanation: 
First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. 

*/

#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
       if(n <= 1){
           return 0;
       }
       if(arr[0] == 0){
           return -1;
       }
       
       int step = arr[0];
       int maxReach = arr[0];
       int jump = 1;
       for(int i=1; i<n; i++){
           if( i == n-1)
           return jump;
           
           maxReach = max(maxReach, i + arr[i]);
           step--;      
           if(step==0){
               jump++;
           if(i >= maxReach)
               return -1;
               
           step = maxReach - i;
           }
       }
       return -1;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  