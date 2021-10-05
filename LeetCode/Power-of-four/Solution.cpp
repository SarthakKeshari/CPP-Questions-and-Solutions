//Given an integer n, return true if it is a power of four. Otherwise, return false.
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool isPowerOfFour(int n) {
        
        if(n<=0)
        {
            return false;
        }
        return !(n&(n-1)) and n%3==1;
        
        
        
    }
int main() {
    int n;
    cin>>n;
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
