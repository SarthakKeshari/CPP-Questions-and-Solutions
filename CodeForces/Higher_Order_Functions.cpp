#include <bits/stdc++.h>
using namespace std;

string s;
// Utility function to compute the answer for the problem
int find(int l, int r) {
    // Initialize answer to 0 and stack variable to 0
    int n = s.size(), ans = 0, stk = 0;
    // If s is "()", we know that answer is 0.
    if (s == "()") {
        return 0;
    }

    // If s is of the form "((()->()))", remove extra brackets and convert it to "()->()"
    while (l <= r && s[l] == '(' && s[r] == ')' && s[l + 1] != ')' && s[r - 1] != '(') {
        l++, r--;
    }

    // Iterate throught the given range, and find an occurrence of "->" such that the brackets before are balanced.
    for (int i = l; i < r; i++) {
        stk += s[i] == '(';
        stk -= s[i] == ')';
        if (s.substr(i, 2) == "->" && stk == 0) {
            // If found, make function calls for evaulating left and right parts and merge them to get answer. 
            ans += max(find(l, i - 1) + 1, find(i + 2, r));
            break;
        }
    }

    // Return the final answer.
    return ans;
}

signed main() {
    // The below two lines of code are used to improve the IO speed
    // for more info about fastio, refer https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Getting input string and calling the find function.
    cin >> s;
    cout << find(0, s.size() - 1);

    return 0;
}