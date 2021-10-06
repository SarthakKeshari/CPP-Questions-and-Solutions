class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        int n=nums.size(),k;
        for(int i=0;i<n;i++){
            k=abs(nums[i]); 
            if(nums[k-1]<0) //if value at index nums[i] is negative means its visited, and we are again visiting it
                v.push_back(abs(nums[i])); //so push its value
            else
                nums[k-1]=nums[k-1]*-1; //if not negative means its visited first time so make it negative
        }
        return v;
    }
};