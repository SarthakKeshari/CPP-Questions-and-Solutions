#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=1000){
        while(t--){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10 && d>=1 && d<=10){
                if(a==b && b==c && c==d) cout<<"0\n";
                else if(a==b || a==c || a==d || b==c || b==d || c==d) cout<<"1\n";
                else if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) cout<<"2\n";
            }
        }
    }
    return 0;
}