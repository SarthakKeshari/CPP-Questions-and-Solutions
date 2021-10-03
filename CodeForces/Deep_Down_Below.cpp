// que link -->https://codeforces.com/problemset/problem/1561/C
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

int main()
{
    ll t = 1;
     cin >> t;
    while (t--)
    {
        ll n;
        cin >> n; // input num
        vector <pair<ll,ll>> vp; // initialing vactor vp

        for(ll i=1;i<=n;i++)
        {
        ll k,m=0;
        cin>>k;
        for(ll j=0;j<k;j++){
         ll x;
        cin>>x;
       m=max(m,x-j+1);
    }
    vp.push_back({m,k});   // push back pair to vp
}
          sort(vp.begin(),vp.end()); // to sort the array
        ll p=0,l=0;
       for(auto i:vp)
       {
       p=max(p,i.first-l);
      l += i.second;
        }
      cout<<p<<endl;
    }
    return 0;
    }
