#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p=1e6+1;
    int cnt[p];
    int isprime[p];
    for(int i=0;i<p;i++){
        isprime[i]=1;
    }
    
    // Sieve of Eratosthenes
    for(int i=2;i*i<p;i++){
        if(isprime[i]==1){
            for(int j=i*i;j<p;j+=i){
                isprime[j]=0;
            }
        }
    }
    
    cnt[0]=0;
    cnt[1]=0;
    for(int i=2;i<p;i++){
        cnt[i]=cnt[i-1]+isprime[i];
    }
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(cnt[x]>=y+1){
            cout<<"Divyam\n";
        }
        else{
            cout<<"Chef\n";
        }
    }
}
