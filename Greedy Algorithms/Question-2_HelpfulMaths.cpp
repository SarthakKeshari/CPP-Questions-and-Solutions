//https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char m[150];
    int i, l,n1=0,n2=0,n3=0;
    gets(m);
    l=strlen(m);
    for(i=0;i<l;i++)
    {
        if(m[i]=='1')
        {
            n1++;
        }
        else if(m[i]=='2')
        {
            n2++;
        }
        else if(m[i]=='3')
        {
            n3++;
        }
    }
    for(i=0;i<n1;i++)
    {
        cout<<'1';
        if((n2==0&&n3==0)&&i==n1-1)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    for(i=0;i<n2;i++)
    {
        cout<<'2';
        if(i==n2-1&&n3==0)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    for(i=0;i<n3;i++)
    {
        cout<<'3';
        if(i==n3-1)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    return 0;
}