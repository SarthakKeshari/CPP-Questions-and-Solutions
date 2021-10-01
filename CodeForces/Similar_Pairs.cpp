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
    cin>>n; // input the size --- this value is always EVEN
    ll arr[n]; 
    for(int i=0;i<n;i++)  //Input the array content
    {
      cin>>arr[i];
    }
    
    ll even=0,odd=0;  // To store count of odd and even elements
    vector<ll>v1,v2; 
    for(int i=0;i<n;i++)   // To store odd elements (in v2) and even elements (in v1)  
    {
      if(arr[i]%2==0)
      {
        even++;
        v1.push_back(arr[i]);
      }
      else
      {
        odd++;
        v2.push_back(arr[i]);
      }
    }
    
    if(even%2==0)  /* as array size is even, so pairs can be formed within all even elements 
                         and similarly for odd elements , So each value can be linked with inside a Similar PAIR */
    {
      cout<<"YES"<<endl;
    }
    
    else   // condition when count of even and odd elements both are odd (then only total size will be even)
    {
      int flag=0;
      for(int i=0;i<v2.size();i++)  // check for  one odd value if it has a corresponding even pair with abs diff equal to 1
      {                                 
        for(int j=0;j<v1.size();j++)
        {
          if(abs(v1[j]-v2[i])==1)    // if one odd value is found with corresponding even value such that absolute diff is 1, so rest all values can be made pair
          {
            flag=1;
            break;     // one odd size pair for both array is found, so remaining size left is both array is even, and even size is already satisfied
          }
        }
        if(flag==1)   // flag is 1, so no need to execute loop further, already found odd pair
        {
          break;
        }
      }
      
      
      
      if(flag==1)         // to print desired output
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
    }
    
  }
 
}