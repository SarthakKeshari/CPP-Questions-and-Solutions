/*
Problem Statement :

An n-bit gray code sequence is a sequence of 2n integers where:

Every integer is in the inclusive range [0, 2n - 1],
The first integer is 0,
An integer appears no more than once in the sequence,
The binary representation of every pair of adjacent integers differs by exactly one bit, and
The binary representation of the first and last integers differs by exactly one bit.
Given an integer n, return any valid n-bit gray code sequence.

*/


#include <bits/stdc++.h>
using namespace std;

class Solution {

    void recur(int num, int pos, vector<int>& ans) {
        ans.push_back(num);
        if (pos < 0) return;

        for (int i = pos; i >= 0; i--)
            recur((num | (1 << i)), i - 1, ans);   // num | (1 << i) will set the i th
    }

  public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        recur(0, n - 1, ans);

        return ans;
    }
};


int32_t main() {
    Solution solution;

    int n;
    cin >> n;
    vector<int> ans = solution.grayCode(n);

    for (auto j : ans)
        cout << j << ' ';
    cout << endl;

    return 0;
}
