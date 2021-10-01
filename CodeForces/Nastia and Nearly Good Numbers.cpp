#include<bits/stdc++.h>
#define N 100005
#define mod 1000000007
#define INF 2147483647
#define ll long long
#define ln "\n"
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast();
  
  int t;
  cin>>t;
  while(t--)
  {
    // taking the input from the user
    ll a,b;
    cin>>a>>b;
    ll x,y,z;
    
    // assuming that x is a positive integer that takes a nearly good number.
    x=a;
    
    // for y to be a perfectly good number if it is divisible by the product A*B.
    y=a*b;
    
    // according to question constraint this must hold
    z=y+x;
    
    if(x==y)
    {
      // if it dont satisfy the conditions print NO
      cout<<"NO"<<ln;
    }
    else
    {
      // if it satisfies the conditions then print yes and print the elements also
      cout<<"YES"<<ln;
      cout<<x<<" "<<y<<" "<<z<<ln;
    }
}
