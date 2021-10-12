
//https://leetcode.com/problems/jump-game-ii/


// Time complexity O(N)
// Auxillary space O(1)

/*
    Approach:
        1.maxReach means the maximum we can reach from that particular index 
          which is the index plus the value of the index (the jump value). 
          So, we keep updating it in each iteration so that whenever we move forward, 
          the variable stores the maximum we can reach by using maxReach = max(maxReach, nums[i]+i)
        2.Also, at each iteration, we reduce our steps variable by 1.
        3.So, in this solution, we return jumps+1 as our answer.
*/

class Solution {
public:
    int jump(vector<int>& nums) {
    if(nums.size()==1)
        return 0;
    int maxReach = nums[0];
    int steps = nums[0];
    int jumps = 0;
    for(int i=1;i<nums.size()-1;i++)
    {
        maxReach = max(maxReach, nums[i]+i);
        steps--;
        if(steps==0)
        {
            jumps++;
            steps = maxReach - i;
        }
    }
    return jumps+1;
    }
};