//https://www.facebook.com/codingcompetitions/hacker-cup/2021/qualification-round/problems/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main(){
    fast;
    ll t,n;
    cin>>t;
    for(int p=1;p<=t;p++){//running for test cases
        cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];//inputting arrays
        ll c[2*n]={0},f=0,co=0,cd=0;//variables for count of 'O' and '.'
        for(int i=0;i<n;i++){
            co=0,cd=0;
            for(int j=0;j<n;j++){
                if(a[i][j]=='O')
                    co++;
                if(a[i][j]=='.')
                    cd++;
            }
            if(co==0)
                c[f]=cd;
            f++;
        }
        for(int j=0;j<n;j++){
            co=0,cd=0;
            for(int i=0;i<n;i++){
                if(a[i][j]=='O')
                    co++;
                if(a[i][j]=='.')
                    cd++;
            }
            if(co==0)
                c[f]=cd;
            f++;
        }
        sort(c,c+(2*n));//sorting of array in ascending order using STL
        ll first=0,min,count=0;
        for(int i=0;i<2*n;i++){
            if(c[i]>0&&first==0){
                min=c[i];
                first=1;
            }
            if(c[i]==min&&first==1)
                count++;
        }
        if(min==1&&count>0){
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++){
                    if(a[i][j]=='.'){
                        int a1=0,b=0;
                        for(int k=0;k<n;k++){//checking for different conditions of pattern of 'X','O' and '.'
                            if(a[i][k]=='O')
                                a1++;
                            if(a[i][k]=='.')
                                b++;
                            if(a[k][j]=='O')
                                a1++;
                            if(a[k][j]=='.')
                                b++;
                        }
                        if(a1==0&&b==2)
                            count--;
                    }
                }
            cout<<"Case #"<<p<<": "<<min<<" "<<count<<endl;
        }
        else if(count>0)
            cout<<"Case #"<<p<<": "<<min<<" "<<count<<endl;
        else
            cout<<"Case #"<<p<<": Impossible"<<endl;
    }
	return 0;
}
