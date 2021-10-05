#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--)
   {
      int n,m;
      cin>>n>>m;
      int a[n],b[m];
      int suma=0,sumb=0;
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
         suma+=a[i];
      }
      for(int i=0;i<m;i++)
      {
         cin>>b[i];
         sumb+=b[i];
      }
      if(suma>sumb)
      {
         cout<<"0\n";
         continue;
      }
      int count=0;
      bool flag=false;
      while(suma<=sumb)
      {
         suma=0;sumb=0;
         if(count==n)
         {
            cout<<"-1\n";
            flag=true;
            break;
         }
         int max,min,k,l;
         max=*max_element(b,b+m); 
         min=*min_element(a, a+n); 
         for(int i=0;i<n;i++)
         {
            if(a[i]==min)
            {
              l=i;
              break;
            }
            
         }
         for(int i=0;i<m;i++)
         {
            if(b[i]==max)
            {
               k=i;
               break;
            }
         }
         swap(a[l],b[k]);
         count++;
         suma=accumulate(a, a+n, 0);
         sumb=accumulate(b, b+m, 0);
      }
      if(flag)
      continue;
      cout<<count<<"\n";
   }
}
