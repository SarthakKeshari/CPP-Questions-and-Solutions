// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {
        int curr_sum = arr[0];
        int max_sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            curr_sum = max(curr_sum + arr[i], arr[i]);
            max_sum = max(max_sum, curr_sum);
        }
        // Your code here
        return max_sum;
    }
};
// { Driver Code Starts.
int main()
{
    int t, n;
    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {
        cin >> n; //input size of array
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends