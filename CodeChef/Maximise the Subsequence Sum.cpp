
// question link :- https://www.codechef.com/START10C/problems/SIGNFLIP/

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
  int d;
  cin>>d;
  while(d--)
  {
    // taking the input from the user
    ll n,k;
    cin>>n>>k;
    
    // we have declared an array of size n
    ll array[n];
    ll sum=0;
    for(int j=0;j<n;j++)
    {
      cin>>array[j];  // taking the inputs as an array inside the loo
    }
    
    /* Here we have take two parameters, the beginning of the 
  array , the length n upto which we want the array to
    be sorted */
    
    sort(array,array+n); 
    
    
    for(int j=0;j<k;j++)
    {
      if(array[j]<0) // if the array is negative
      {
        array[j]=-array[j];  // turning the negative elements into positive one to maximise the sum
      }
    }
    
    for(int j=0;j<n;j++)
    {
      if(array[j]>0)
      {
        sum+=array[j]; // total sum
      }
    }
    cout<<sum<<ln;  // prints the output
  }
}

// This Code is contributed by Adarsh Kumar Singh (Username ----> Fury-MadMax)

