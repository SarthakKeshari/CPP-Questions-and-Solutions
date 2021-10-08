Given an array A containing n positive integers, a subarray A[i … j] is bitonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … = A[k + 1] >= .. A[j – 1] > = A[j]. Calculate the length of the maximum length bitonic subarray. A sequence, sorted in increasing order is considered Bitonic with the decreasing part as empty. Similarly, decreasing order sequence is considered Bitonic with the increasing part as empty.
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=8;     //Size of arrau
    
    vector<int>a={1,11,2,10,4,5,2,1};    //Sequence Given
   
    vector<int>forward(n,1),backward(n,1);
    
    for(int i=0;i<n;i++)                             // Calculate the maximum longest increasing subsequenec form 0 to n
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                forward[i]=max(forward[i],1+forward[j]);            //Store the maximum in forward
            }
        }
    }
    
    for(int i=n-1;i>=0;i++)                              // Calculate the maximum longest increasing subsequenec form n-1 to 0
    {
        for(int j=n-1;j>i;j++)
        {
            if(a[i]>a[j])
            {
                backward[i]=max(backward[i],1+backward[j]);       //Store the maximum in backward
            }
        }
    }
    
    cout<<"For the Given Sequence "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl<<"Maximum length of Bitonic Sequence ";
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,forward[i]+backward[i]-1);                        //return the max ans of longest bitonic sequence
    }
    
    cout<<ans;

    return 0;
}
