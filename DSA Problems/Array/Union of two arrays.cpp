/*
Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int doUnion(int a[], int n, int b[], int m)  {
    
       set<int>s;
       
       for(int i=0;i<n;i++)
       {
           s.insert(a[i]);
       }
       for(int i=0;i<m;i++)
       {
           s.insert(b[i]);
       }
       
       return s.size();
    
    }
};


int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends