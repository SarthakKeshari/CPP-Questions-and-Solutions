
/*

Codechef - Longest AND Subarray question

Link to the question-

https://www.codechef.com/OCT21C/problems/ANDSUBAR


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	long long int t, n, i, p, temp, ans;
	cin >> t;
	while (t--)
	{
		cin >> n;
		// Initialize the value of temp
		temp = 1;

		// Find the maximum value of temp for which (2*temp) should be less than equal to n.
		while ((temp * 2) <= n)
		{
			temp = temp * 2;
		}
		p = temp / 2;

		// store the range of longest subarray in variable name ans
		ans = max(n - temp + 1, temp - p);

		// Print ans
		cout << ans << "\n";
	}
	return 0;
}
