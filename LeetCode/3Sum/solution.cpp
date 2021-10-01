// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /* if the size of nums is less than 3, 
           that implies that triplet cannot be formed
           therefore we are returning an empty vector */
        if(nums.size()<3)
            return {};

        //we are sorting the given vector
        sort(nums.begin(), nums.end());

        //arr vector will hold the triplets satisfying the conditions
        vector<vector<int>> arr;

        //we are iterating the vector num from first index till last_index-2
        for(int i = 0; i<nums.size()-2; i++){
            /* if the current element and the previous element of the vector num are same,
               then we can ignore the current element and continue to next iteration,
               this is because if we use the duplicate element, then duplicate triplet might be formed */
            if(i>0 && (nums[i]==nums[i-1]) ) continue;

            /* int variable l is left end of the vector after index i and 
              r is the right end of the vector, i.e., last element of nums*/
            int l = i+1;
            int r = nums.size() - 1;

            /* while loop with condition l is less than r,
               in the sense, we are not allowing l and r to cross over each other */
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                /* required sum is 0, if sum is negative, we are incrementing l by one,
                   this is because nums is sorted vector and element in next index of l will
                   have greater number than element in l, thus overall sum will increase */
                if(sum<0) l++;

                //similar is the case when sum is greater than 0
                else if(sum>0) r--;

                //if sum is equal to 0
                else{
                    //we are pushing the triplet vector into the arr vector which holds all the triplets
                    arr.push_back({nums[i], nums[l], nums[r]});

                    //by doing the below lines of code, we are skipping the indexes with duplicate elements
                    while(l+1<r && nums[l] == nums[l+1]) l++;
                    while(l<r-1 && nums[r] == nums[r-1]) r--;
                    l++;
                    r--;
                }
            }
        }
        /* we are returning the final vector with all the 
        triplets which satisfy the condition given in the question */
        return arr;
    }
};