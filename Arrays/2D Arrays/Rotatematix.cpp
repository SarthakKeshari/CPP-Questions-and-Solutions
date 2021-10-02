//Given a n x n matrix, turn it by 90 degrees in clockwise direction without using any extra space.
#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


void rotatematrix(vector<vector<int>>&m)
{
    int n=m.size();
    
    //loop to interchange the row and column
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(m[i][j],m[j][i]);
        }
    }
    
    // loop to reverse the rowwise the elememt of matrix
    for(int i=0;i<n;i++)
    {
        reverse(m[i].begin(),m[i].end());
    }
}

int main()
{// Input Matrix 
    vector<vector<int>> arr{{1,2,3,7},
                            {5,6,7,8},
                            {9,9,8,7},
                            {6,5,4,3}};
    
    cout<<"Input Matrix "<<endl<<endl;
    //print the input matrix
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }   
    cout<<endl<<endl;
                            
    //implement the rotatematrix function
    rotatematrix(arr);
    
    //print the 90 degree clockwise rotated matrix
    cout<<"Resultant Matrix"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}