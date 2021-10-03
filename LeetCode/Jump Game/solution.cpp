class Solution {
public:
    bool canJump(vector<int>& v) {
        int i,n=v.size(),maxi=0;
        if(n==1)
            return 1;
        for(i=0;i<n;i++)
        {
            if(maxi>=i)
                maxi=max(maxi,i+v[i]);
        }
        return maxi>=(n-1);
    }
};