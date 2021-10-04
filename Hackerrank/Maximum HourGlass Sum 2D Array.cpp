// An hourglass is a subset of values with indices falling in this pattern in this graphical representation.
// There are 16 hourglasses in array . An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in array, then print the maximum hourglass sum. The array will always be 6 x 6.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[7][7];
int sum(int stx , int sty) //add up each element from subarrays for a square of 3 * 3.
{             
    return arr[stx][sty] + arr[stx][sty+1] + arr[stx][sty+2] + arr[stx+1][sty+1] + arr[stx+2][sty] + arr[stx+2][sty+1] + arr[stx+2][sty+2];
}
int main() {
    int ans = -100;
    for(int i = 0 ; i < 6 ; i++){           // Taking the input for the matrix
        for(int j = 0 ; j < 6 ; j++){      
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0 ; i < 4 ; i++){           // first for loop to iterate over the array.
        for(int j = 0 ; j < 4 ; j++){       // second for loop to iterate over subarray.
            ans = max(ans , sum(i,j));      // ans variable that will hold highest sum of the hourglass.
        }
    }
    
    cout << ans << endl;
    return 0;
}
