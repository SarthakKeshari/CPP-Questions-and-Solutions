
//https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int total=0;
        int left = 0, right = n-1; //Taking first element as left and last element as right
        
        int maxLeft=0, maxRight=0;  //Consider max height for left and right respectively
        
        while(left <= right){   //Check till left element is small or equal to right
            
            if(height[left]<=height[right]){  //check till height for left is less or equal to right
                
                if(height[left] >= maxLeft)   //Height at Left is greater or equal to maximum value at left
                    maxLeft = height[left];
                else
                    total += maxLeft - height[left]; //Add the difference between maximum value and height at left
                
                left++; //Increment from left side
            }
            else{
                if(height[right] >= maxRight){  //Height at Right is greater or equal to maximum value at right
                    maxRight = height[right];
                }
                else
                    total += maxRight - height[right]; //Add the difference between maximum value and height at right
                
                right--; //Decrement from right side
            }
        }
        return total;  //Return the total units of water trapped between bars
    }
};
