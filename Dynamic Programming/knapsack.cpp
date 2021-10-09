//Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val and wt which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val such that sum of the weights of this subset is smaller than or equal to W.

#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

const int N=1e5+2;

int val[N],wt[N];  //Intilise the value and weight array

int knapsack(int n,int w)
{
    if(w<=0)
    {
        return 0;        //If weight of bag is less than equal to zero the return zero
    }
    
    if(n<=0)            //If No. of items is less than equal to zero the return zero
    {
        return 0;
    }
    
    if(wt[n-1]>w)             //If weight of last items is more than weight of bag then return for n-1 item.
    {
        return knapsack(n-1,w);
    }
    else{                 //Their is two possiblity take or not if take it then item are 1 minus and weight is weight minus weight of that item + val of that item else item number is one less
        return max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+val[n-1]);
    }
}
 //driver class
int main()
{
    int n;              //Number of item 
    
    cout<<"Enter the number of items"<<endl;          
    cin>>n;
    
    cout<<"Enter the values of items"<<endl               //Input item
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    
    cout<<"Enter the weights of items"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];                 //Input weight
    }
    int w;
    cout<<"Maximum weights of bags"<<endl;
    cin>>w;
    cout<<"Maximum values is "<<knapsack(n,w)<<endl;

    return 0;
}
