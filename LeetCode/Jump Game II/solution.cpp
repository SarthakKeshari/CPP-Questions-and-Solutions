
//https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        int i=0,c=0,reach=0,a=0;
        if(nums[0]>=n-1)
        {
            return 1;
        }
        for(int i=0;i<=reach;i++)
        {
            if(i+nums[i]>reach){
                reach=i+nums[i];
            }
            if(i==a)
            {
                
                if(reach>a)
                {
                    c++;
                    a=reach;
                }
                 if(reach>=n-1)
                {
                    return c;
                }
            }
            
        }
        return c;
    }
};