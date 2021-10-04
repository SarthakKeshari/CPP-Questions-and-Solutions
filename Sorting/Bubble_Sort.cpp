/* 
Sample Input 1
5
7 0 2 1 3
Output
0 1 2 3 7

Sample Input 2
4
10 40 3 32
Output
3 10 32 40
*/

#include <iostream>
using namespace std;

int main()
{
    // number of elements
    int n;
    cin>>n;
    
    //take input of array elements
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            // Swap the elements
            if(arr[j+1]<arr[j])
            swap(arr[j], arr[j+1]);
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}

/* Time Complexity- O(n*n)
Space Complexity- O(1) */
