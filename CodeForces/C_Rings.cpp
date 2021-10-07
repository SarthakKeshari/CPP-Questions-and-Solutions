// Problem Link: https://codeforces.com/contest/1562/problem/C
// Contest #741, Problem C: Rings
// Solution

#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define F(i, a, b) for (long long i = a; i < b; i++)
#define RF(i, a, b) for (long long i = a; i >= b; i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll x = -1;
        F(i,0,n){
            if(s[i] == '0'){
                x = i+1;
                break;
            }
        }
        
        if(x == -1){
            cout << "1 " << n/2 << " 2 " << n/2+1 << endl; 
        }
        else {
            if(x >= n/2+1){
                cout << "1 " << x << " " << 1 << " " << x-1 << endl;
            }
            else {
                cout << x << " " << n <<  " " << x+1 << " " << n << endl; 
            }
        }
               
    }
}
