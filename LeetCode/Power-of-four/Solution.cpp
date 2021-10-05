//Given an integer n, return true if it is a power of four. Otherwise, return false.
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool isPowerOfFour(int n) {
        
        if(n<=0)
        {
            return false;     //Negative Numbers can't be a power of 4
        }
        return !(n&(n-1)) and n%3==1;   //If a number is power of 2 then n7(n-1) is zero and if the number is power of 4 it always gives 1 when taken mod with 3        
        
        
    }
int main() {
    int n;
    cin>>n;  //Taking Input the number
    bool ans=isPowerOfFour(n);
    if(ans)        
    {
        cout<<"Yes "<<n<<" is a Power of 4";
    }
    else
    {
        cout<<"No "<<n<<" is not a Power of 4";
    }
    
    return 0;
}
