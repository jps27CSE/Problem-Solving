/*
Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
            int sum =0;
        
        for(int i=0;i<n;i++)
        {
            sum +=mat[i][i] + mat[i][n-i-1];
        }
        if(n%2)
        {
            sum -= mat[n/2][n/2];
        }
        
        return sum;
    }
};