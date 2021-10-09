class Solution {

    void recur(int num, int pos, vector<int>& ans) {
        ans.push_back(num);
        if (pos < 0) return;
        
        for (int i = pos; i >= 0; i--)
            recur((num | (1 << i)), i - 1, ans);   // num | (1 << i) will set the i th 
    }

public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        recur(0, n - 1, ans);
        
        return ans;
    }
};
