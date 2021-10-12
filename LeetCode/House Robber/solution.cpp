
/*
Problem Statement:

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.


Example 1:

    Input: nums = [1,2,3,1]
    Output: 4
    Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
    Total amount you can rob = 1 + 3 = 4.

 
Constraints:

    1 <= nums.length <= 100
    0 <= nums[i] <= 400

*/

class Solution {
public:
    int rob(vector<int>& nums) {

        //For every element in nums we have two choices - either to include that element or discard it.

        vector<vector<int>> dp(nums.size(),vector<int>(2,0));
        dp[0][0] = nums[0];
        for(int i=1; i<nums.size(); i++) {

            //If previous element was not included then we have two choices either to
            //keep this element or discard it. If we keep this element then previous 
            //element should have been discarded so we take dp[i-1][0]+nums[i]. If
            //we discard this element then we can take dp[i-1][0]. Take the max of these two.

            dp[i][0] = max(dp[i-1][0], dp[i-1][1] + nums[i]);

            //If previous element was kept, then we cannot include this element. So
            //directly we can take dp[i-1][0].

            dp[i][1] = dp[i-1][0];
        }

        return(max(dp[nums.size()-1][0], dp[nums.size()-1][1]));
    }
};