//C++ program to print the below pattern :-

/* $$$$##$$$$
       ##
       ##
       ##
       ##
       ##
       ##
       ##
   $$$$##$$$$ */

#include<bits/stdc++.h>
#define ll long long
#define N 100005
#define mod 1000000007
#define INF 2147483647
#define ln "\n"
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast();
  
  // for printing the pattern I have used 3 distinct patterns for printing the letter I 
  
string S1[3] = {"$$$$##$$$$", "    ##", "$$$$##$$$$"};
int number = 9;
int print[9] = {0,1, 1, 1, 1, 1, 1, 1, 0}; //iterating over the correct sequence and printing the correct pattern
for(int j=0; j < number ;j++) // for loop from 0 to n 
{
	cout << S1[ print[j] ] << ln; // prints the final pattern
}
return 0;
}

// This Code is contributed by Adarsh Kumar Singh (Username ----> Fury-MadMax)
