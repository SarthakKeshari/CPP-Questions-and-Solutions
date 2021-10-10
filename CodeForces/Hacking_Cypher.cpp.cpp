#include<bits/stdc++.h>
using namespace std;

//function to produce x to the power n using binary exponentiation with a modulo
long long fpow(long long x, long long n, long long MOD)
{
        long long res = 1;
        x %= MOD;
        while (n)
        {
                if (n & 1)
                        res = res * x % MOD;
                x = x * x % MOD;
                n >>= 1;
        }
        return res;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;//taking string as input
    long long a,b;
    cin>>a>>b;//taking integers a and b as two numbers as input
    int n = s.size();//storing the size of the string
    int pre[n+1],suf[n+1];//creating a prefix and a suffix array which would store in it the (prefix of lenght i+1) modulo a and (sufffix of lenght n-i) modulo b respectively 
    pre[0] = (s[0]-'0')%a;//initialise prefix of length 1
    for (int i = 1; i < n-1; i++)
    {
        pre[i] = (pre[i-1]*10+(s[i]-'0'));//calculating the prefix of length (i+1) as prefix of lenght i + the digit at current position
        pre[i]%=a;
    }
    suf[n-1] = (s[n-1]-'0')%b;//initialise prefix of length 1
    for (int i = n-2; i >0; i--)
    {
        long long power = fpow(10,n-1-i,b);
        suf[i] = (suf[i+1]+(s[i]-'0')*(power));//calculating the suffix of length (i+1) as (the digit at current position)*(10 to the power n-1-i) + (suffix of lenght i)
        suf[i]%=b;
    }

    bool flag=0;
    int ans=0;

    //iterate through the string and if at any position the prefix and suffix both store 0, that is both are divisble by a and b repectively, and the suffix doenst contains a zero in front, we swtich the flag and mark that posiiton as answer.

    for (int i = 0; i < n-1; i++)
    {
        if (s[i+1]!='0')
        {
            if (pre[i]==0&&suf[i+1]==0)
            {
                ans = i;
                flag=1;
                break;
            }
        }
    }

    if (flag==0)//if there is no such valid cut
    {
        cout<<"NO"<<endl;
    }
    else{//if there is a such valid cut
        cout<<"YES"<<endl;
        for (int i = 0; i <= ans; i++)
        {
            cout<<s[i]; //printing the string till i
        }
        cout<<endl;
        for (int i = ans+1; i < n; i++)
        {
            cout<<s[i];//printing the string from i+1 to n
        }
        cout<<endl;
    }
}