//https://codeforces.com/problemset/problem/1354/B

#include<iostream>
using namespace std;
// validating the window for valid numbers of 1, 2 and 3
bool verify( int window[4]){
    if(window[0]==0 && window[1]>=1 && window[2]>=1 && window[3]>=1 ) return true;
    return false;
}
// function f2 for the slinding window of size mid
bool f2(string s, int mid){
    int window[4]={0,0,0,0};
    int i=0,p=0;
    int n=s.size();
    for(;i<mid; i++) window[s[i]-'0']++;
    if(verify(window)) return true;
    for(; i<n; i++){
        window[s[p]-'0']--;
        window[s[i]-'0']++;
        if(verify(window)) return true;
        p++;
    }
    return false;

}

// function f1 for binary search
int f1(string s){
    int low = 0;
    int high = s.size();
    int ans=s.size()+1;
    while(low<=high){
        int mid= (low+high)/2;
        if(f2(s,mid)){
            ans=min(ans,mid);
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return (ans==(s.size()+1) ? 0 : ans);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<f1(s)<<endl;
    }
    return 0;
}
