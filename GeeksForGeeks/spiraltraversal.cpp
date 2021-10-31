//Given a 2D array, print it in spiral form
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
#define R 4
#define C 4
void spiraltraversal(int arr[R][C],int i,int j,int m,int n)
{
    //Let i be the first column
    //Let j be the last column
    //Let n be max number of columns in matrix
    //Let m be max number of columns in matrix
     
    if(i>=m or j>=n)
    {
        return;
    }
    
    for(int p=j;p<n-1;p++) //print the first row
    {
        cout<<arr[i][p]<<" ";
    }
    
    for(int p=i;p<m;p++) //print the last column
    {
        cout<<arr[p][n-1]<<" ";
    }
    
    if((m-1)!=i)        //if matrix has more than one row then print last row
    {
        for(int p=n-2;p>=j;p--)
        {
            cout<<arr[m-1][p]<<" ";
        }
    }
    
    if((n-1)!=j)         //if matrix has more than one column then print first row
    {
        for(int p=m-2;p>=i;p--)
        {
            cout<<arr[p][j]<<" ";
        }
    }
    
    spiraltraversal(arr,i+1,j+1,m-1,n-1);  //recursion call to print all row and column
}

int main()
{
    cout<<"Enter the Elements of Matrix"<<endl;
    
    int arr[R][C];       //Enter the elements for matrix
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    
    cout<<"Entered Matrix"<<endl;
 
    for(int i=0;i<R;i++)     //Print matrix
    {
        for(int j=0;j<C;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Spiral form of Matrix "<<endl;   //Print spiral traversal for matrix
    
    spiraltraversal(arr,0,0,R,C);
    return 0;
}
