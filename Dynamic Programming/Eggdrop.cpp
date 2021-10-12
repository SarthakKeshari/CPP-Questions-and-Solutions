//Given a certain amount of floors and also given certain amount of eggs .What is the least amount of egg drops one has to perform to find out the threshold floor. Threshold floor is one from which the egg starts breaking and also egg breaks for all the floors above. Also, if egg dropped from any floor below the threshold floor, it won’t break.
#include <bits/stdc++.h>
using namespace std;


int max(int a, int b) //Function to calculate the maximum
{
    if(a>b)
    {
        return a;
    }
    else
    {
       return b;
    }
}

int eggdrop(int n, int k) 
{
	if (k == 1 || k == 0)  //If Number of floor is 1 or 0 then return number of florr
		return k;

	if (n == 1)         //If the number of egg is 1 then return number of floors
		return k;

	int min = INT_MAX, res;

	for (int i = 1; i <= k; i++) {
		res = max(eggdrop(n - 1, i - 1),eggdrop(n, k - i));   //If egg breaks then floor will k-1 and egg will be n-1 
		if (res < min)                                        //Else floor will be k-i and number of eggs will be same
			min = res;
	}

	return min + 1;
}

int main()
{
	int n;
	cout<<"Enter the number of Eggs "<<endl;
	cin>>n;
	int k;
	cout<<"Enter the number of Floors "<<endl;
	cin>>k;
	
	cout<<endl<<"Minimum number of trials to break egg is "<< eggdrop(n, k) << endl;
	return 0;
}

