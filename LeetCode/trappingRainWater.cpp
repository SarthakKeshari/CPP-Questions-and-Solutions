class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int l[n],r[n];
        l[0]=height[0];
        for(int i=1;i<n;i++)
        {
            if(height[i]>l[i-1])
                l[i]=height[i];
            else
                l[i]=l[i-1];
        }
        r[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(height[i]>r[i+1])
                r[i]=height[i];
            else
                r[i]=r[i+1];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(l[i],r[i])-height[i];
        }
        return ans;
    }
};
