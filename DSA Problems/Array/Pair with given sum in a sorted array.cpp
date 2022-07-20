/*

Input:
n = 7
arr[] = {1, 2, 3, 4, 5, 6, 7}
K = 8
Output:
3
Explanation:
We find 3 such pairs that
sum to 8 (1,7) (2,6) (3,5)

*/

#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        int i=0,j=n-1,k=0,ans=0;
        
        while(i<j)
        {
            k = arr[i] + arr[j];
            
            if(k == sum)
            {
                ans++;
                i++;
                j--;
                
            }
            else if(k > sum)
            {
                j--;
            }
            else{
                i++;
            }
        }
        
        if(ans==0)
        {
            return -1;
        }
        else{
            return ans;
        }
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends