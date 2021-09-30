/*Chef is given an array A consisting of N positive integers. Chef shuffles the array A and creates a new array B of length N, where Bi=(Ai+i)mod2, for each i(1≤i≤N).
Find the maximum possible sum of integers of the array B, if Chef shuffles the array A optimally.
https://www.codechef.com/SEPT21B/problems/SHUFFLIN/	*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){//start of main function
    fast;
    ll t,n,e,o,ele,s;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2!=0){
            o=(n+1)/2;//calculating how many odd positions are present in the length n
            e=n/2;//calculating how many even positions are present in the length n
        }
        else
            e=o=n/2;
        s=0;//initialising s(sum variable) as 0
        for(int i=1;i<=n;i++){
            cin>>ele;
            if(ele%2==0&&o>0){//counting for even numbers
                o--;
                s++;
            }
            else if(ele%2!=0&&e>0){//counting for odd numbers
                e--;
                s++;
            }
            else{
                if(ele%2==0)
                    e--;
                else
                    o--;
            }
        }
        cout<<s<<endl;
    }
	return 0;
}
