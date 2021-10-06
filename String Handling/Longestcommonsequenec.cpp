//You are given two strings. You need to print the longest common subsequence with tabulation method.
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int N=1e2+2;  //Taking a large number 
int dp[N][N]; //Intialise a dp table

int lcs(string&s1,string&s2,int n,int m)    //Function to calculate the LIS
{
    if(n==0 || m==0)          //If length of s1 or s2 ise zero then return zero
    {
        return 0;
    }
    
    if(dp[n][m]!=-1)          //If value is already calculated then return that
    {
        return dp[n][m];
    }
    
    if(s1[n-1]==s1[m-1])    //If last element is equal then add 1 in diagonal element
    {
        dp[n][m]=1+lcs(s1,s2,n-1,m-1);
    }
    
    else{
        dp[n][m]=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));        //Else Calculate max from (i-1,y) and (i,y-1) of 2d array
    }
    return dp[n][m];
}

 //driver function
int main()
{
    for(int i=0;i<N;i++)             //Intialise dp table by -1
    {
        for(int j=0;j<N;j++)
        {
            dp[i][j]=-1;
        }
    }
    
    string s1,s2;
    cout<<"Enter the String String 1"<<endl;     //Input String 1
    cin>>s1;
    cout<<"Enter the String String 2"<<endl;     //Input String 2
    cin>>s2;
    int n=s1.size();
    int m=s2.size();
    
    cout<<endl<<"longest common subsequence"<<endl;         
    cout<<lcs(s1,s2,n,m)<<endl;
    return 0;
}