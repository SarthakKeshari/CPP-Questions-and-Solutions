class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        k=k-n;
        for(int i=n-1;i>=0;i--){
            if(k>25){
                s[i]='z';
                k=k-25;
            }
            else{
                s[i]=97+k;
                break;
            }
        }
        return s;
    }
};
