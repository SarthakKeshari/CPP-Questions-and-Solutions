#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    ll t,n,e,o,ele,s;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2!=0){
            o=(n+1)/2;
            e=n/2;
        }
        else
            e=o=n/2;
        s=0;
        for(int i=1;i<=n;i++){
            cin>>ele;
            if(ele%2==0&&o>0){
                o--;
                s++;
            }
            else if(ele%2!=0&&e>0){
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
