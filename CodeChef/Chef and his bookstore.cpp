
// question link :- https://www.codechef.com/CDSP2021/problems/SEPT202/

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
  // n is the input taking from the user
  ll n;
  cin>>n;

  // we have declared an array of size n
  ll array[n];
  for(ll i=0;i<n;i++)
  {
      // taking the inputs as an array inside the loop
      cin>>array[i]; 
  }

  /* Here we have take three parameters, the beginning of the 
  array , the length n upto which we want the array to
    be sorted and to demonstrate descending order sort have used greater<>().*/ 
  sort(array,array+n,greater<>());


   // initially initialized to zero
  ll count = 0;

  for(ll i=0;i<n;i++)
  {
        if((i+1)%3 != 0)
        {
            // if the above condition holds we have increased the count value 
            count=count + array[i]; 
        }
  }
    cout<<count<<ln; // prints the output
    return 0;
} 


// This Code is contributed by Adarsh Kumar Singh (Username ----> Fury-MadMax)
