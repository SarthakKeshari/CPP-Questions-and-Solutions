//Given a sequence, find the length of the longest palindromic subsequence in it.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int lps(char*seq,int i,int j)
{
    if(i==j)          //If string has only one value then return 1;
    {
        return 1;
    }
    
    if(seq[i]==seq[j] && i+1==j)          //If string has only one value then return 2;
    {
        return 2;
    }
    
    if(seq[i]==seq[j])                     //If string has only first and last character are same;
    {
      return lps(seq,i+1,j-1)+2;  
    }
    else{
        return max(lps(seq,i+1,j),lps(seq,i,j-1));            //If string has only first and last character are not same then call the recursive function;
    }
    

}

//Driver class
int main()
{
    int n;
    cout<<"Enter the number of characters"<<endl;
    cin>>n;
    char seq[n];
    cout<<"Enter the String"<<endl;
    cin>>seq;

    cout<<"longest palindromic subsequence is "<<lps(seq,0,n)<<endl;
    

    return 0;
}
