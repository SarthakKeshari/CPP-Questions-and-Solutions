//https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //maximum altitude
        int ans = 0;
        //current altitude
        int altitude = 0;
        
        for(int i: gain){
            altitude += i;
            //it checks if altitude is greater than max altitude(i.e., ans) if so, then variable ans is updated.
            ans = max(ans, altitude);
        }
        
        return ans;
    }
};
