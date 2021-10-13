
//Given an array of n positive integers. Write a program to find the sum of maximum sum subsequence of the given array such that the integers in the subsequence are sorted in increasing order.
#include <bits/stdc++.h>
using namespace std;


// Function to find the maximum increasing sum
int maxincsum(int arr[], int n)
{
    int max = 0;
    int mis[n];         //let an array of size n
 
 
    for (int i = 0; i < n; i++ )
    {
        mis[i] = arr[i];               //Store given array in mis array
    }
        
 

    for (int i = 1; i < n; i++ )
        for (int j = 0; j < i; j++ )
            if (arr[i] > arr[j] && mis[i] < mis[j] + arr[i])    //If array is increasing and sum is increasing
            {
                mis[i] = mis[j] + arr[i];                   //Add the value in mis array
            }
                

    for (int i = 0; i < n; i++ )      //find the max sum in array
    {
        if ( max < mis[i] ){
            max = mis[i];
            
        }
        
    }
 
    return max;         //Return the maximum sum
}
 
// Driver Code
int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;         //Input the size of array;
    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];          //Input the elements of array;
    }
    
    cout << "Sum of maximum sum increasing " <<maxincsum(arr,n)<<endl; //call the function

    return 0;
}