
// question link - https://www.codechef.com/START13C/problems/DIWALI1

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
  // d is the number of test cases 
  ll d; 
  cin>>d;
  while(d--)
  {
    ll P,a,b,c,x,y; 
    
    // taking the input from the user
    cin>>P>>a>>b>>c>>x>>y; 
   
   // total cost of anar will be the product of number of fuljharis and their cost + anar cost
   ll  Q = x * a + b;
   
   // total cost of chakri will be the product of number of fuljharis and their cost + chakri cost
   ll R = y * a + c;
   
   ll solution = 0;
   if (Q < R) // if chakri is greater then this conditon holds
   {
       solution = Q;
   }
   else
   {
       solution = R;   // if annar is greater then this condition holds
   }
   
   cout << P / solution <<ln; // prints the answer

  }
}

// This Code is contributed by Adarsh Kumar Singh (Username ----> Fury-MadMax)


