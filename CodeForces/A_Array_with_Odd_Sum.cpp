#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; // n is number of test cases.

    cin>>n;

    int a[n]; // array of size n.

    int sum = 0; // sum variable will store sum of elements of array.
    for (int i = 0; i<n; i++)
    {
        
        cin>>a[i];

        sum += a[i]; // this is storing sum of elements.
    }
    if (sum % 2 == 0) // if value of sum of elements of array is odd then output will be no.
    {
        cout<<"NO"<<endl;
    }
    else{ // and if value of sum of elements of array is even then output will be yes
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