#include <iostream>
using namespace std;

int main() {
	// test cases 
	int t;
	cin>>t;
	while(t--)
	{
	    // there are n no of movies 
	    int n;
	    cin>>n;
	    //where as arr and brr are two array for accepting input ie. rating and length of the movie.
	    int arr[n],brr[n];
	    int product=0,rating=0,index=0;
	    // loop for taking input ie. length of all the movies.
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        
	    }
	     // loop for taking input ie. reting of all the movies.
	    for(int i=0;i<n;i++)
	    {
	        cin>>brr[i];
	    }
	    // now here our main logic. ittreate a loop for n times ie. n is the no of movies.
	     for(int i=0;i<n;i++)
	     {
	         // here we are checking the following conditions ie. 
		 // 1. Length * rating(higest)
		 // 2. if there are more then one moive then higest rating.
		 // 3. still if their is a tie then with minimum index.
		 if(arr[i]*brr[i]>=product && brr[i] > rating )
	         {
	             product=arr[i]*brr[i];
	             rating = brr[i];
	             index=i;
	             
	         }
	    }
	     cout<<index+1<<endl;
	 
	    }
	return 0;
}
