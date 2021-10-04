//https://codeforces.com/contest/977/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    //creating the array of size n
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //using the sort function to sorting the array in o(nlogn)
    sort(a,a+n);
   //checking for k is equal to 0 if k is equal to 0 and first element 
   //is equal to 1 then print -1 else 1
    if(k==0)
        cout<<(a[0]==1? -1:1);
    else{
   //checking for same value of a[k-1] and a[k] 
        if(a[k-1]==a[k]) cout<<-1;
        else cout<<a[k-1];
    }
    return 0;
}
