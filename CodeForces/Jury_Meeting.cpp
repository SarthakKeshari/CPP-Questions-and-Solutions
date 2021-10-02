// question link :-https://codeforces.com/problemset/problem/1569/C
// This Code is contributed by Sanyam Jain (Username ----> jainsanyam228)
// SANYAM JAIN //
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <cctype>
#include <vector>
#include <set>
#include <unordered_map>
#include <utility>
#include <string>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define ll long long
#define repa(i,a,b) for(ll i = a; i <= b; i++)
#define repd(i,a,b) for(ll i = a; i >= b; i--)
#define lli unsigned long long
#define pb push_back
#define in insert
#include <bits/stdc++.h>
#define cn cout << "NO\n"
#define cy cout << "YES\n"
#define cm cout << "-1\n"
#define vv vector<ll> v
#define eli else if
#define el else
#define nl endl
#define ss set<ll> s
#define MOD 1000000007
#define mode 1000000009
using namespace std;

ll facto(ll n){
    ll res = 1, i;
    for (i = 2; i <= n; i++)
        res =  (res*i)%998244353;
    return res%998244353;
}


ll mod = 998244353;
ll fac(ll n, ll sk){
    ll ans = 1;
    repa(i,2,n){
        if(i == sk) continue;
        ans *= i;
        ans %= mod;
    }
    return ans;
}
  
    
int main()
{
    ll t = 1;
    cin >> t;
    
    while (t--)
    {
        ll n;
        cin>>n;
       ll arr[n];
       ll mx = -1;
       for (ll i = 0; i < n; i++)
       {
         cin >> arr[i]; // array input
         mx = max(mx , arr[i]); // to find the max of array arr
       }
       ll a=0,b=0;
       for (ll i = 0; i < n; i++)
       {
           if(arr[i]==mx){
               a++; // cheaking frequency of max element
           }else if(arr[i]==mx-1){
               b++;  // cheaking frequency of max-1 element
           }
       }
        if(a>1)
        {
           cout << facto(n) <<endl;} // facturial of n 
       else if(b==0 && a!=n) {
           // if frequency of b==0 and all element of array is not same
           cout << 0 << endl;
       }
       
       else
       {
           ll ans = (b*fac(n,b+1))%mod; 
              cout << ans<<endl;
       }
       
    }
    return 0;
    }
    // Thank You
    
