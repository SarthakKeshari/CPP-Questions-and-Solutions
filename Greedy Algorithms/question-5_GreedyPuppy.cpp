//https://www.codechef.com/problems/GDOG

#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
   cin>>t;
   while(t--)
   {
      long long int N,K,ans=0;
      cin>>N>>K;
      for(int i=1;i<=K;i++)
      {
         ans=max(ans,N%i);
      }
      cout<<ans<<endl;
   }
  return 0;
}