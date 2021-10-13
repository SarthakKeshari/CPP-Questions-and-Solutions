//Problem Link:
//https://www.codechef.com/AUG20B/problems/CHEFWARS

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int tc;   //Number of Test Cases
	cin >> tc;
	while(tc--)
	{
	    int h,p;
	    cin >> h >> p; // h is Darth's Health and p is Chef Power
	    while(h!=0 && p!=0) //Check till h becomes zero or p comes to zero
	    {
	        if(h>p)
	            h = h-p; //decrease p from h
	           else
	                h=0;
	                
	                p/=2; //On every attack Chef's power becomes half
	    }
	    if(h)
	    {
	        
	        cout << 0 << endl; //If p becomes zero before h did not become zero
	    }
	    else
	    {
	        cout << 1 << endl; //p is non-negative integer and h decreases to zero
	    }
	}
	return 0;
}
