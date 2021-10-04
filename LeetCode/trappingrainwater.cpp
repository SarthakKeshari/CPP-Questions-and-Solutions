#include <stdio.h>
#include <limits.h>
 
int max(int x, int y) {
    return (x > y) ? x : y;
}
 
int min(int x, int y) {
    return (x < y) ? x : y;
}
 
// Function to find the amount of water that can be trapped within
// a given set of bars in linear time and extra space
int trap(int bars[], int n)
{
    // base case
    if (n <= 2) {
        return 0;
    }
 
    int water = 0;
 
    // `left[i]` stores the maximum height of a bar to the left
    // of the current bar
    int left[n-1];
    left[0] = INT_MIN;
 
    // process bars from left to right
    for (int i = 1; i < n - 1; i++) {
        left[i] = max(left[i-1], bars[i-1]);
    }
 
    /*
    int right[n];
    right[n - 1] = INT_MIN;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = max(right[i+1], bars[i+1]);
    }
 
    for (int i = 1; i < n - 1; i++)
    {
        if (min(left[i], right[i]) > bars[i]) {
            water += min(left[i], right[i]) - bars[i];
        }
    }
    */
 
    // `right` stores the maximum height of a bar to the right
    // of the current bar
    int right = INT_MIN;
 
    // process bars from right to left
    for (int i = n - 2; i >= 1; i--)
    {
        right = max(right, bars[i+1]);
 
        // check if it is possible to store water in the current bar
        if (min(left[i], right) > bars[i]) {
            water += min(left[i], right) - bars[i];
        }
    }
 
    return water;
}
 
int main(void)
{
    int heights[] = { 0,1,0,2,1,0,1,3,2,1,2,1 };
    int n = sizeof(heights) / sizeof(heights[0]);
 
    printf("The maximum amount of water that can be trapped is %d",
            trap(heights, n));
 
    return 0;
}
        
