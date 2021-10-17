#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        helper("", n, 0, 0);
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
//Driver code starts.
int main(){
    Solution s;
    s.generateParenthesis(4);

    return 0;
}