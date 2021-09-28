#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  cout<<"Prime nos from 1 to 50 are : \n";
 
 for (int i=2;i<=50;i++)
 {
   int c=0;
  for (int a=2 ; a<=sqrt(i);++a)
  {
    if (i%a==0)
    c=1;
  }
  if (c==0)
    cout<<i<<" ";
 }
 return 0;
}