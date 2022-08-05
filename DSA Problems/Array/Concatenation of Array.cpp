/*

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]

*/

#include <vector>
using std::vector;
#include <algorithm>
using std:: max;
using std:: swap;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
          for(int i=0;i<n;i++)
          {
              nums.push_back(nums[i]);
          }
        
        return nums;
    }
};