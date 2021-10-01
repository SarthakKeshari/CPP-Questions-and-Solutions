#include<bits/stdc++.h>
using namespace std;

//for sum of array
int sum(int aa[],int x)
{   int s = 0;
    while(x > 0)
    {s += aa[x];
    x -= x & (-x);
    }
    return s;
}

//change bst at a given node
void change(int aa[],int n,int x,int val)
{
    while(x<=n)
    {aa[x]+= val;
       x+=x&(-x);
    }
}
 
//central function to work
int count(int arr[], int n)
{
    int ic=0; 
 
    int max=0;
    for (int i=0;i<n;i++)
        if (max < arr[i])
            max=arr[i];
 
    int aa[max+1];
    for (int i=1;i<=max;i++)
        aa[i] = 0;
 
    for (int i=n-1;i>=0;i--)
    {
        ic += sum(aa,arr[i]-1);
        change(aa,max,arr[i],1);
    }
 
    return ic;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout <<count(arr,n);
    return 0;
}
