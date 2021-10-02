//Question Statement:

//Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

#include <iostream>
#include <vector>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c)
{
    int lowval = matrix[0][0];
    //  smallest value in matrix i.e first element as it is row wise sorted

    int highval = matrix[r - 1][c - 1];
    //  slargest value in matrix i.e last element as it is row wise sorted

    int midval;

    int n = r * c;
    //  this done to get total no elements in matrix

    while (lowval <= highval)
    {
        midval = (lowval + highval) / 2;
        int ans = 0;
        //  to store count of numbers having values less than midvalue.
        for (int i = 0; i < r; i++)
        {
            int l = 0, h = c - 1;
            // binary search for elemnts in each row.
            while (l <= h)
            {
                int m = (l + h) / 2;
                if (matrix[i][m] <= midval)
                    l = m + 1;
                else
                    h = m - 1;
            }

            ans = ans + l;
        }
        // changing the search space according to value of count obtained.
        if (ans <= n / 2)
            lowval = midval + 1;
        // count is less so median is a greater number so search in [midval+1] to [highval].

        else
            highval = midval - 1;
        // count of number is more so change search space to [lowval] to [highval-1]
    }
    return lowval;
}
int main()
{
    int r = 3, c = 3;
    vector<vector<int>> m = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}};

    // Function Call:
    cout << "Medain is: " << median(m, r, c);
    return 0;
}
