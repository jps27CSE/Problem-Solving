/*
Input: nums = [0,2,1,5,3,4]
Output: [0,1,2,4,5,3]
Explanation: The array ans is built as follows: 
ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
    = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
    = [0,1,2,4,5,3]


*/


#include <vector>
using std::vector;
#include <algorithm>
using std:: max;
using std:: swap;


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector <int>  ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans[i] = nums[nums[i]];
        }
        
        return ans;
    }
};