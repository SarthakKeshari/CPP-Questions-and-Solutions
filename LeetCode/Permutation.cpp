//Problem link:https://leetcode.com/problems/permutations/
class Solution {
public:
  void backtrack(vector<int>& nums,vector<vector<int>>& result,int st){
      if(st>=nums.size()) 
      {
          result.push_back(nums);
          return;
      }
      for(int i=st;i<nums.size();i++)
      {
          swap(nums[st],nums[i]);
          backtrack(nums,result,st+1);
          swap(nums[st],nums[i]);
      }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> result;
        backtrack(nums,result,0);
        return result;
    }
};
