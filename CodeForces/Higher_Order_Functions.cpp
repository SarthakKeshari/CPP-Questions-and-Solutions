// Problem statement
/*
Helen studies functional programming and she is fascinated with a concept of higher order functions — functions that are taking other functions as parameters. She decides to generalize the concept of the function order and to test it on some examples.

For her study, she defines a simple grammar of types. In her grammar, a type non-terminal T is defined as one of the following grammar productions, together with order(T), defining an order of the corresponding type:

"()" is a unit type, order("()")=0.
"(" T ")" is a parenthesized type, order("("T")")=order(T).
T1 "->" T2 is a functional type, order(T1"->"T2)=max(order(T1)+1,order(T2)). The function constructor T1 "->" T2 is right-to-left associative, so the type "()->()->()" is the same as the type "()->(()->())" of a function returning a function, and it has an order of 1. While "(()->())->()" is a function that has an order-1 type "(()->())" as a parameter, and it has an order of 2.
Helen asks for your help in writing a program that computes an order of the given type.

Input
The single line of the input contains a string consisting of characters '(', ')', '-', and '>' that describes a type that is valid according to the grammar from the problem statement. The length of the line is at most 104 characters.

Output
Print a single integer — the order of the given type.

Examples
input
()
output
0
input
()->()
output
1
input
()->()->()
output
1
input
(()->())->()
output
2
input
()->(((()->())->()->())->())
output
3 
*/

// Solution
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