//Problem Link:
//https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int total = 0;
        int left = 0, right = n-1;
        int maxLeft = 0, maxRight = 0;
        while(left <= right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=maxLeft)
                    maxLeft = height[left];
                else
                    total += maxLeft - height[left];
                
                left++;
            }
            else
            {
                if(height[right]>=maxRight)
                    maxRight = height[right];
                else
                    total += maxRight - height[right];
                
                right--;
            }
        }
        return total;
    }
};
