class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        int cnt=0;
        for(int i=0;i<=31;i++){
            if(n>>i & 1){
                cnt++;
                if(i%2==1)
                    return false;
            }
            if(cnt>1)
                return false;
        }
        return true;
    }
};
