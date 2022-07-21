/*

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

*/
#include <vector>
using std::vector;
#include <algorithm>
using std:: max;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        
        if(intervals.size()==0)
        {
            return res;
        }
        
        sort(intervals.begin(),intervals.end());
        vector<int> curr=intervals[0];
        
        for(int i=1;i<intervals.size();i++)
        {
            if(curr[1] < intervals[i][0])
            {
                res.push_back(curr);
                curr=intervals[i];
                
            }
            
            else{
                curr[1] = max(curr[1],intervals[i][1]);
            }
        }
        res.push_back(curr);
        
        return res;
    }
};