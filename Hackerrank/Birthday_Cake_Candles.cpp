/*

You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. 
They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

https://www.hackerrank.com/challenges/birthday-cake-candles/problem

*/

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,temp=0,count=0,i;   
    cin>>n;
    vector<int> array(n);
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    sort(array.begin(),array.end());  //rearrange the elements in ascending order
    temp=array[n-1];

    for(i=0;i<n;i++)
    {
        if(temp==array[i])           //finding the number of tallest candles
        count++;
    }

    cout<<count;
    return 0;
} 