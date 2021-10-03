//https://codeforces.com/contest/977/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(k==0)
        cout<<(a[0]==1? -1:1);
    else{
        if(a[k-1]==a[k]) cout<<-1;
        else cout<<a[k-1];
    }
    return 0;
}
