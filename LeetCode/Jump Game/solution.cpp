class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minimalStepsToReachLast = 0;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i] < minimalStepsToReachLast) {
                minimalStepsToReachLast++;
            } else {
                minimalStepsToReachLast = 1;
            }
        }
        return nums[0] >= minimalStepsToReachLast;
    }
};
