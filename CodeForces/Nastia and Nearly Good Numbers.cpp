
// Problem Link :- https://codeforces.com/problemset/problem/1521/A

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
  
  int c; // c is the number of test cases
  cin>>c;
  while(c--)
  {
    // taking the input from the user
    ll A,B;
    cin>>A>>B;
    ll p,q,r;
    
    // assuming that p is a positive integer that takes a nearly good number.
    p=A;
    
    // for q to be a perfectly good number if it is divisible by the product A*B.
    q=A*B;
    
    // according to question constraint this must hold
    r=q+p;
    
    if(p==q)
    {
      // if it dont satisfy the conditions print NO
      cout<< "NO" <<ln;
    }
    else
    {
      // if it satisfies the conditions then print yes and print the elements also
      cout<< "YES" <<ln;
      cout<< p <<" "<< q <<" "<< r <<ln;
    }
}
}
// This code is contributed By Adarsh Kumar Singh (Username ---> Fury-MadMax)
