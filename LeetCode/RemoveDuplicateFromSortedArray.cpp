/*
Problem Statemenet: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Solved: pAss all test cases
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) 
           return 0;
        int i = 0;                         // Slow pointer i.e i
        for (int j = 1; j < nums.size(); j++) {  // Fast Pointer i.e j
            if (nums[j] != nums[i]) {         // if nsame element then skip the i process
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;                    // return size of new array
    }
};
