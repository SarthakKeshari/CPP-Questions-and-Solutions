//Given a cost matrix cost[][] and a position (m, n) in cost[][],write a function that returns cost of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix represents a cost to traverse through that cell. The total cost of a path to reach (m, n) is the sum of all the costs on that path.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define R 5
#define C 6

int min(int x,int y,int z) //Function to calculate minmum from 3 numbers
{
    if(x<y)                 //IF x is small than y
    {
        if(x<z)           //IF x is small than z
        {
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if(y<z)           //IF y is small than z
        {
            return y;
        }
        else{           //IF z is small than y           
            return z;
        }
    }
}

int mincost(int cost[R][C],int m,int n)
{
    if(n<0 || m<0)                       //IF given x and y coordinates are negative
    {
        return INT_MAX;
    }
    else if(m==0 && n==0)                      //IF given x and y coordinates are zero      
    {
        return cost[m][n];
    }
    else{                                   //for given x and y coordinates calculate the minimum cost
        return cost[m][n]+min(mincost(cost,m-1,n-1),mincost(cost,m-1,n),mincost(cost,m,n-1));
    }
}
 //driver function
int main()
{
    int cost[R][C]={{1,2,3,4,5,9},
                    {7,8,5,3,7,3},
                    {1,5,9,7,8,9},
                    {8,9,6,7,2,1},
                    {7,8,2,3,4,7}};
    cout<<"Minimum cost for the matrix "<<endl;          //print the matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
                     
    cout<<"minimum cost to reach " <<mincost(cost,3,2)<<endl; 

    return 0;
}
