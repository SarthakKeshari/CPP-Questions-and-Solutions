class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        
        long int closest = INT_MAX;
        bool found = false;
        for(int i=0; i<nums.size(); i++) {
            
            int left = i + 1;
            int right = nums.size() - 1;
            long int imt = 0;
            while(left < right) {
                imt = nums[i] + nums[left] + nums[right];
                // closest = std::min(abs(imt-target), abs(closest-target));
                if(abs(imt-target) < abs(closest-target)) {
                    closest = imt;
                }
                if(imt == target) {
                    found = true;
                    break;
                }
                if(imt < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
            if(found) {
                break;
            }
        }
        
        return closest;
    }
};