class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();  //size of given vector
        
        bool dp[n];   //create a dp table of size equal n and initialize all values as false
        for(int i=0;i<n;i++)
            dp[i]=false;
        dp[0]=true; //the first index is always reachable so mark it true
        
        int pos=0;   //currently we are at first cell as starting location

//Now we loop every values in nums
        for(int i=0;i<n;i++){
//for each value in numswe try every position from pos to nums[i] till we are able make a jump less than last index
            for(int j=pos;j<=nums[i];j++){
                if(i+j<nums.size() && dp[i] )  //if the jump length is < nums.size and the place from we are making the jump is already true 
                    dp[i+j]= true;   //then next location that is i+j is also reachable
                else break;   //else if we make a jump greater than nums.size break
            }
            pos=nums[i];  //update the new position
        }
        return dp[n-1];  //return the status of last index 
    }
};