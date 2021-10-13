//Problem Link:
//https://www.codechef.com/AUG20B/problems/CHEFWARS

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int h,p;
	    cin >> h >> p;
	    while(h!=0 && p!=0)
	    {
	        if(h>p)
	            h = h-p;
	           else
	                h=0;
	                
	                p/=2;
	    }
	    if(h)
	    {
	        
	        cout << 0 << endl;
	    }
	    else
	    {
	        cout << 1 << endl;
	    }
	}
	return 0;
}
