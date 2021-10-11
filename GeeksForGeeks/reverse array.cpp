
//TO REVERSE A 1-D ARRAY USING C++

#include <iostream>
using namespace std;
int  main()
  {
   int a[50],b[50],i,j,N;
   cout<<"How many elements you want to enter:-"; 
     cin>>N;                                                // inputting number of elements
   cout<<"Enter any "<<N<<" elements in Array:- ";
   for(i=0; i<N ;i++)
   {
   cin>>a[i];                                                 //inputting the elements that we want to swap
   }
   cout<<"Reverse of Array:- ";

   for(i=N-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];                                                //swapping the elements
   }
   for(i=0; i<N ;i++)
   {
   cout<<b[i];                                                     //printing the final values
   }
  return 0;
  }
