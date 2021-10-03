Sample Input 1
5
7 1 2 0 4 
0 1 2 4 7
  
Sample Input 2
6
6 4 5 1 0 2
0 1 2 4 5 6
  

#include <iostream>
using namespace std;

int main()
{
    
    //number of elements
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            swap(arr[j+1], arr[j]);
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}

Time Complexity: O(n*n)
Space Complexity: O(1)
