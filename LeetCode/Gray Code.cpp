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
    // Recursive function
    void recur(int num, int pos, vector<int>& ans) {
        ans.push_back(num); // inserting the number in answer vector
        if (pos < 0) return; // if position is less than zero then no need to furthur call the function
        
        // setting the bits of number from pos to zero and calling the function recursively
        for (int i = pos; i >= 0; i--)
            recur((num | (1 << i)), i - 1, ans);   // num | (1 << i) will set the i th bit
    }

  public:
    vector<int> grayCode(int n) {
        vector<int> ans; // defining the answer vector 
        recur(0, n - 1, ans); // calling the recursive function

        return ans; // return the answer vector
    }
};


int32_t main() {
    Solution solution; // creating a object of solution class

    int n;
    cin >> n; // taking the input 
    vector<int> ans = solution.grayCode(n); // calling the grayCode function of Solution class

    for (auto j : ans)
        cout << j << ' ';
    cout << endl;

    return 0;
}
