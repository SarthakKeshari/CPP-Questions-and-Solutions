//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's and then print the matrix.
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// Function setmatrix to convert full rows and column to 0
void setmatrix(vector<vector<int>>& matrix)
{
    //taking matrix[1][1] as 1 to avoid collsion between row and column and taking first row as row dummy matrix and first column as column dummy matrix
    int c0=1 , rows=matrix.size() ,cols=matrix[0].size(); 
    
    for(int i=0;i<rows;i++)
    {
        if(matrix[i][0]==0) 
        {
            c0=0;
        }
        for(int j=1;j<cols;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=matrix[0][j]=0;
            }
        }
    }
    
    // Making Entire Row and Column if 0 is present either in row or in column
    for(int i=rows-1;i>=0;i--)
    {
        for(int j=cols-1;j>=1;j--)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
        
        if(c0==0)
        {
            matrix[i][0]=0;
        }
    }
    
}

int main()
{// Input Matrix 
    vector<vector<int>> arr{{1,1,1,1},
                            {1,0,1,1},
                            {1,1,0,0},
                            {0,0,0,1}};
    
    cout<<"Input Matrix "<<endl<<endl;  
    
    // Resultant Matrix
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }   
    cout<<endl<<endl;
                            
    
    setmatrix(arr);
    cout<<"Resultant Matrix"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
