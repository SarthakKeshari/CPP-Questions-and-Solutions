//Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to find the maximum of two integers
int max(int a, int b){
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
 
//Function to find the maximum profit
int cutRod(int price[], int n)
{
    int maxprofit;         
    int arr[n+1];         //Let an array of size n+1 to store different profit possible.
    arr[0] = 0;           //Intilaise the first element of let array be 0


   for (int i = 1; i<=n; i++)
   {
       maxprofit = INT_MIN;
       for (int j = 0; j < i; j++)
       {
           maxprofit = max(maxprofit, price[j] + arr[i-j-1]);       //Find the max profit possible by checking all the possible cases
           
       }
       
       arr[i] = maxprofit;      //Store all the profit in acsending order in array
   }
 
   return arr[n];       //return the last element of array
}
 
//Driver code
int main()
{
    int n;
    cout<<"Enter the length of Rod "<<endl;              //Input the length of rod
    cin>>n;
    int profit[n];
    cout<<"Enter the profit of different pieces of Rod "<<endl;    
    for(int i=0;i<n;i++)
    {
        cin>>profit[i];                      //Input the profit of different pieces of Rod
    }
    cout <<"Maximum profit "<<cutRod(profit, n);           //call the Function
    
    return 0;
}