// SANYAM JAIN
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t = 1;
     cin >> t;
    while (t--)
    {
    ll n;
    cin >> n;
    ll a[n+1] ={0};
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    ll mx = 0;
    for (ll i = 2; i <= 2*n; i++)
    {
       ll curr =0;
       for (ll j = 0; j < (i+1)/2; j++)
       {
           if (i - j > n) continue;
           curr += min(a[j],a[i-j]);
       }
       if(i%2==0) curr += a[i/2]/2;
       mx = max(mx,curr);
       
    }
    cout << mx <<endl;

    }
    return 0;
    }
   
