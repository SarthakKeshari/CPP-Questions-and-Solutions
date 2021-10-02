class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        vector<vector<int>> dp(dungeon.size(), vector<int>(dungeon[0].size(),-1));    //dp value is minimum initial health to get to the end from i, j
        return DFS(dungeon,0,0,dp);
    }
    
    int DFS(vector<vector<int>>& dungeon, int i, int j, vector<vector<int>>& dp){
        if (i == dungeon.size()-1 && j == dungeon[0].size()-1)    //If we are on the last cell return the health needed to pass the cost if negative, otherwise return 1 if positive
            return dungeon[i][j] > 0? 1 : 1 - dungeon[i][j];
        if (dp[i][j] != -1)          //If we already calculated the cell previously, use the value
            return dp[i][j];
        
        if (i == dungeon.size()-1)      //If in the last row, only DFS with j increments
            return dp[i][j] = max(1, DFS(dungeon,i,j+1,dp)-dungeon[i][j]);
        if (j == dungeon[0].size()-1)   //If in the last column, onlly DFS with i increments
            return dp[i][j] = max(1, DFS(dungeon,i+1,j,dp)-dungeon[i][j]);
        
        //If not in the last row or column, return minimum of lateral or vertical step-DFS
        return dp[i][j] = max(1, min(DFS(dungeon,i+1,j,dp)-dungeon[i][j],DFS(dungeon,i,j+1,dp)-dungeon[i][j]));
    }
};