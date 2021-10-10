//Question- https://codeforces.com/problemset/problem/432/A

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   int ans=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]+k<=5)
      {
         ans++;
      }
   } 
   cout<<ans/3<<endl;  
  return 0;
}