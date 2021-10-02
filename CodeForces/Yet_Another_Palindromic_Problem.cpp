// Code contributed by Rakshit Pandey (Username-----> Master-Helix)

//Question link - https://codeforces.com/contest/1324/problem/B


#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define l long long



int main()
{
  fast();
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;         // input the array size
    ll arr[n];     
    map<ll,ll>m1;
    map<ll,ll>m2;     // create two map for storing  previous elements and forward elements at each go
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];                // input the array elements
    }
    
    int flag=0;
    m1[arr[0]]++;   // input first element only in first map
    
    for(int i=1;i<n;i++)
    {
      m2[arr[i]]++;          // input rest all elements inside second map and decrease the count as we iterate step by step
    }
    
    for(int i=1;i<n-1;i++)
    {
      ll key=arr[i];
      m2[key]--;                                            // at each value in m2 first decrease its current count by 1 and now check if there is any single value whcih is previous present
      for(auto it=m1.begin();it!=m1.end();it++)             // and next present in the m2 map so the string length will become 3 with first and last as same element
      {                                                     // if this condition satisifes, flag=1 and then break the loop
        if(m2.find(it->first)!=m2.end() && m2[it->first]>0)
        {
          flag=1;
          break;
        }
      }
      m1[key]++;               // add the current m2 value in m1 map at each iteration of m2 loop so that u can each consecutive subsequence
      if(flag==1)
      {
        break;                    // if flag==1, then u have find already a palindrome of size 3 , which is valid 
      }
    }
    
   
    
    if(flag==1)                           // to get the desired output
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  
  
}
