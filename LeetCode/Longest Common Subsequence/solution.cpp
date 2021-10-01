class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1)); // make a matrix dp to store 
        for(int i=1;i<=n;i++)  //iterate through string s1
        {
            for(int j=1;j<=m;j++)  //iterate through string s2

            {
                if(s1[i-1]==s2[j-1])  // if they are equal than diagonal + 1
                    dp[i][j]=dp[i-1][j-1]+1;
                else  //if they are not same then take the max of up and left
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        // the last element will contain the count of subsequence in common
        return dp[n][m];
    }
};