class Solution {
public:
    int subtractProductAndSum(int n) {
        int x=n,sum=0,mul=1;
     //calculate digit product and digit sum
        while(x>0){
            int digit=x%10;
            sum+=digit;
            mul*=digit;
            x=x*10;
        }
        return mul-sum;
    }
};