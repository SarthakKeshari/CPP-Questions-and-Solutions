C. K-th Not Divisible by n
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two positive integers n and k. Print the k-th positive integer that is not divisible by n.

For example, if n=3, and k=7, then all numbers that are not divisible by 3 are: 1,2,4,5,7,8,10,11,13…. The 7-th number among them is 10.

Input
The first line contains an integer t (1≤t≤1000) — the number of test cases in the input. Next, t test cases are given, one per line.

Each test case is two positive integers n (2≤n≤109) and k (1≤k≤109).

Output
For each test case print the k-th positive integer that is not divisible by n.

Solution:-

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
