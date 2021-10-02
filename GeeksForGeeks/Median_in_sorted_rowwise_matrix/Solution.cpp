
#include <iostream>
#include <vector>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c)
{
    int lowval = matrix[0][0];
    int highval = matrix[r - 1][c - 1];
    int midval;
    int n = r * c;
    while (lowval <= highval)
    {
        midval = (lowval + highval) / 2;
        int ans = 0;
        for (int i = 0; i < r; i++)
        {
            int l = 0, h = c - 1;
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
        if (ans <= n / 2)
            lowval = midval + 1;
        else
            highval = midval - 1;
    }
    return lowval;
}
int main()
{
    int r=3,c=3;
    vector<vector<int>> m={
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
        };
    cout<<"Medain is: "<<median(m,r,c);
    return 0;
}
 
