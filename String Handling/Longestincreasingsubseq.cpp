//You are given an array. Find the length of longest increasing subsequence implementing dynamic programming with tabulation method.
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int N=1e5+2;  //Taking a large number 
int dp[N]; //Intialise a dp table

int lis(vector<int>&a,int n)    //Function to calculate the LIS
{
    if(dp[n]!=-1)          //If value is already calculated then return that
    {
        return dp[n];
    }
    else
    {
        dp[n]=1;            //Else take it as 1
    }
    
    for(int i=0;i<n;i++)        
    {
        if(a[n]>a[i])          //If an value is less then last Element the increase dp
        { 
            dp[n]=max(dp[n],1+lis(a,i));    //Call Recursive function
        }
    }
    return dp[n];         //return dp value
}
 //driver function
int main()
{
    int n;
    cout<<"Enter the number of Elements is Array"<<endl;
    cin>>n;
    for(int i=0;i<N;i++)
    {
        dp[i]=-1;        //Intialise dp table by -1
    }
    vector<int>a(n);
    cout<<"Enter the Elements"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];         //Input value by user
    }
    
    cout<<endl<<"longest increasing subsequence"<<endl;         //Return LIS
    cout<<lis(a,n-1)<<endl;
    return 0;
}