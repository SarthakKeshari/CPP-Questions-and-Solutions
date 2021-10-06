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

   if(n==k)     //if value of n and k given in the problem then simply we have to print n+1
    cout<<n+1<<el;
   else if(k==1)    //if value of k=1 then simply print 1 itself because 1 is not divisible by any no >=1.
    cout<<1<<el;
   else if(n==2){
    cout<<(2*k)-1<<el;
   }
   else{                     //else you can simply divide k by (n-1) from that you can get how many no. which are not divisible by n and if you need kth no. then u simply add k + remainder of k/(n-1) to k/(n-1).
      ll temp=k/(n-1);
      ll r=k%(n-1);
      if(r==0)r=-1;          //there is edge case if remainder is 0 then u have to subtract the final value by -1 and print it.
      ll ans=((n-1)*temp)+temp+r;
    cout<<ans<<el;

   }

}


    return 0;}
