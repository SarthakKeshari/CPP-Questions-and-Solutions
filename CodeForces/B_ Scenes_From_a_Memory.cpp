// Problem link: https://codeforces.com/contest/1562/problem/B
// Codeforces Round: #741
// Problem B:  Scenes From a Memory
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
        ll k;
        cin >> k;
        cin >> s;
        ll a[10] = {0};
        bool f = 0;
        F(i,0,k){
            a[s[i] - '0']++;
            if(s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9'){
                f=1;
                break;
            }
        }       
        if(f){
            cout << "1\n";
            if(a[1])
                cout << "1\n";
            else if(a[4])
                cout << "4\n";
            else if(a[6])
                cout << "6\n";
            else if(a[8])
                cout << "8\n";
            else if(a[9])
                cout << "9\n";
        }
        else {
            cout << "2\n";
            if(a[2] >= 2){
                cout << "22\n";
            }
            else if(a[3] >= 2){
                cout << "33\n";
            }
            else if(a[5] >=2){
                cout << "55\n";
            }
            else if(a[7] >= 2){
                cout << "77\n";
            }
            else {
                if(isPos("25"))
                    cout << "25\n";
                else if(isPos("27"))
                    cout << "27\n";
                else if(isPos("32"))
                    cout << "32\n";
                else if(isPos("35"))
                    cout << "35\n";
                else if(isPos("72"))
                    cout << "72\n";
                else if(isPos("75"))
                    cout << "75\n";
                else if(isPos("52"))
                    cout << "52\n";
                else if(isPos("57"))
                    cout << "57\n";
                else 
                    cout << "-1\n";

            }
        }
    }
}   
