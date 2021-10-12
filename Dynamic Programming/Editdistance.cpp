//Given two strings str1 and str2 and perform add, remove, replace operations that can performed on str1. Find minimum number of operations required to convert ‘str1’ into ‘str2’
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int min(int x,int y,int z)        //Function to Calculate the minimum of three number
{
    return min(min(x,y),z);        //Return minimum of three number
}

int editdistance(string s1,string s2,int n,int m)
{
    if(n==0)                       //If length of string1 is zero then return lenght of string2
    {
        return m;
    }
    if(m==0)
    {
        return n;                 //If length of string2 is zero then return lenght of string1
    }
    if(s1[n-1]==s2[m-1])
    {
        return editdistance(s1,s2,n-1,m-1);     //If last char of both string is same the return digonal element
    }
    else{
        return 1+min(editdistance(s1,s2,n-1,m),editdistance(s1,s2,n,m-1),editdistance(s1,s2,n-1,m-1));   //Else return min of ((x-1,y-1),(x,y-1),(x-1,y)) +1
    }
    
}
 //Driver code
int main()
{
    string s1;
    cout<<"Enter the string 1"<<endl;
    cin>>s1;
    
    string s2;
    cout<<"Enter the string 2"<<endl;
    cin>>s2;
    int n=s1.size();
    int m=s2.size();
    
    cout<<"Total operations to convert string 1 to string 2 IS  "<<editdistance(s1,s2,n,m)<<endl;
}