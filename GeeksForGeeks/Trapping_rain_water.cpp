#include <bits/stdc++.h>
using namespace std;
int max(int x, int y) {
    return (x > y) ? x : y;
}

int trap(int heights[], int n)
{
    int left = 0, right = n - 1, water = 0;
 
    int maxLeft = heights[left];
    int maxRight = heights[right];
 
    while (left < right)
    {
        if (heights[left] <= heights[right])
        {
            left++;
            maxLeft = max(maxLeft, heights[left]);
            water += (maxLeft - heights[left]);
        }
        else {
            right--;
            maxRight = max(maxRight, heights[right]);
            water += (maxRight - heights[right]);
        }
    }
 
    return water;
}
 
int main(void)
{
    int n;
    cout<<"enter the number of buildings: ";
    cin>>n;
    int heights[n];
    cout<<"enter the height of buildings : ";
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }
    
    
    cout<<"The maximum amount of water that can be trapped is "<<trap(heights, n);
 
    return 0;
}





