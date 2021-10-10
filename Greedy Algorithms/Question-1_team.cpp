//https://codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int count=0;
   while(t--)
   {
     int P,V,T;
     cin>>P>>V>>T;
      if(P+V+T>=2)
         count++;
   }
  cout<<count<<endl;     
  return 0;
}