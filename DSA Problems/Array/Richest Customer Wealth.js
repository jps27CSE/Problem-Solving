/*

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.

*/


var maximumWealth = function(accounts) {
    let result =0
    
    for(let i=0;i<accounts.length;i++)
        {
            let temp = 0
            
            for(let j=0; j<accounts[i].length;j++)
                {
                    temp+=accounts[i][j]
                }
            
            result = Math.max(result,temp)
        }
    
    return result
};