/*
problem link - https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
=================================================================================================================================================================
let us start !!
================================================================================================================================================================= */
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int t[n+1][W+1];
      
      //defining the for loop 
      for(int i=0;i<n+1;i++)
          t[i][0]=0;
       for(int i=0;i<W+1;i++)
          t[0][i]=0;
          
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                if(wt[i-1]<=j)
                {
                    t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
           return t[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //read the  number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack() with number of weights,array of weignts,array of elements number of elements
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
// =================================================================================================================================================================
