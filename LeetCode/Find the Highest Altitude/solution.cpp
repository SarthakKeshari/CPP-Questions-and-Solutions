class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int altitude = 0;
        for(int i: gain){
            altitude += i;
            ans = max(ans, altitude);
        }
        return ans;
    }
};
