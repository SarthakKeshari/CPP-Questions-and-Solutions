#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
// Member function will return the anwser of string datatype
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        helper("", n, 0, 0);
        // Returning the finial answer
        return result;
    }
    void helper(string s, int n, int l, int r){
        if (l < r || l > n || r > n) return;  // exceed the bundary -> return
	    if (l == n && r == n){
	        result.push_back(s);
	        return;
	    }
		helper(s + "(", n, l+1, r);
		helper(s + ")", n, l, r+1);
    }
};
//Drive code starts
int main(){
    Solution s;
    //calling method generateParentheses() with number.
    s.generateParenthesis(4);

    return 0;
}