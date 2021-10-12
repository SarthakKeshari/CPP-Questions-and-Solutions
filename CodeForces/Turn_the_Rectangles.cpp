


// Question Link - https://codeforces.com/contest/1008/problem/B
// The Code is Contributed by RAKSHIT PANDEY---- (Username----> Master-Helix)

#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define l long long





// RAKSHIT
int main()
{
  
  fast();
  ll n;
  cin>>n;
  vector<pair<ll,ll>>v;       // store width and height of each rectangle in  form of pair inside a vector
  for(int i=0;i<n;i++)
  {
    ll w1,h1;
    cin>>w1>>h1;
    v.push_back(make_pair(w1,h1));
  }
  
  ll maxi=max(v[0].first,v[0].second);  // set maxi as first value of rectangle (maximum of width and height)
  
  int flag=0;
  for(int i=1;i<n;i++)
  {
    ll val=min(v[i].first,v[i].second);    // after that check for each upcoming rectangle, if upcoming rectangle has height and width both min then take maximum of that minimum width and height
    ll val2=max(v[i].first,v[i].second); 
    if(val>maxi)
    {
      flag=1;
      break;
    }
    else                       // if min value is  more than previous max , then domino is not formed so break the loop
    {
      if(val2<=maxi)
      {
        maxi=val2;
      }
      else
      {
        maxi=val;
      }
    }
  }
   
  if(flag==1)       // to print the desired output
  {
    cout<<"NO";
  }
  else
  {
    cout<<"YES";
  }
}
