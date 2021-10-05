#include<bits/stdc++.h>
#define ll   long long
#define  el           "\n"
#define  mod  1000000007
#define md 200001

using namespace std;


int main() {
        ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
      //  freopen("input.txt","r",stdin);
       //  freopen("output.txt","w",stdout);

int t=1;
cin>>t;
while(t--){
   ll n,k;
   cin>>n>>k;

   if(n==k)
    cout<<n+1<<el;
   else if(k==1)
    cout<<1<<el;
   else if(n==2){
    cout<<(2*k)-1<<el;
   }
   else{
      ll temp=k/(n-1);
      ll r=k%(n-1);
      if(r==0)r=-1;
      ll ans=((n-1)*temp)+temp+r;
    cout<<ans<<el;

   }

}


    return 0;}
