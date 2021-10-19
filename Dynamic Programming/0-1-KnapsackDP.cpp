//Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val and wt which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val such that sum of the weights of this subset is smaller than or equal to W.
//Time complexity-O(n*W) where n is the size of value array and W is the maximum capacity
//Space complexity-O(n*W)

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


int knapSack(int W, int wt[], int val[], int n) 
    { 
       int dp[n+1][W+1]; //Make a table of Size n+1 and W+1, where the row symbolises number of items in array and column symbolises the maximum capacity
       for(int i=0;i<=n;i++){
           dp[i][0]=0;       //Initialize The first column 0 because if total wight is 0 then no item can be selected
       }
       for(int i=0;i<=W;i++){
           dp[0][i]=0;       //Initialize The first row 0 because if their are no items then no item can be selected
       }
       for(int i=1;i<=n;i++){
           for(int j=1;j<=W;j++){
               if(wt[i-1]<=j){       // If the wight of item is less than the current wieght then only it can be selected
                   dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);   //If we select the item then we add its value and subtract its wieght and if we dont select it we dont ,and then find max among them
               }
               else{
                   dp[i][j]=dp[i-1][j]; // we dont select the item
               }
           }
       }
       return dp[n][W]; //return the maximum value
    }
int main()
{
    int n;              //Number of item 
    
    cout<<"Enter the number of items"<<endl;          
    cin>>n;
    int val[n];
    int wt[n];
    cout<<"Enter the values of items"<<endl;               //Input item
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    
    cout<<"Enter the weights of items"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];                 //Input weight
    }
    int W;
    cout<<"Maximum weights of bags"<<endl;
    cin>>W;
    cout<<"Maximum values is "<<knapSack(W,val,wt,n)<<endl;

    return 0;
}
