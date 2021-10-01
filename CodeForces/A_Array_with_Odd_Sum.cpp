#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a[n];

    cin>>n;
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        
        cin>>a[i];

        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}




int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        solve();
    }
}