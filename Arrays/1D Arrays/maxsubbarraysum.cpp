//Find the contiguous sub-array which has the maximum sum.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//maxsubarraysum function to find max sum
int maxsubarraysum(int arr[],int n)
{
    int max_sum=0;   //initialize max_sum
    int curr_sum=INT_MIN;   //initialize curr_sum=INT_MIN to overcome negative values.
    for(int i=0;i<n;i++)
    {
        curr_sum=curr_sum+arr[i];
        if(curr_sum>max_sum)
        {
            max_sum=curr_sum;
        }
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
    return max_sum;
}

//Driver program to test maxsubarraysum
int main()
{
    cout<<"Enter the number of Elements"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximumsum=maxsubarraysum(arr,n);
    cout<<"Maximum contiguous sum of array is "<<maximumsum;
    return 0;
}