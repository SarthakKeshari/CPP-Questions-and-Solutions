#include <string>// library used for string
#include <iostream>
#include <sstream>// library used for type casting
using namespace std;
int main()
{
	string s;
	cout<<"Enter an n digit number\n";
	cin>>s;
	int l=s.size(),c=0;// c is counter used to count fixed digits each time
	string a[l];// new array to arrange all possible combinations, which will be equal to the number of digits in the number
	a[0]=s;// first combination will be the original number
	cout<<s<<" ";
	for(int i=1;i<l;i++)// i will be used as counter for no of combinations, excluding the first combination.
	{
		a[i]=a[i-1].substr(0,c);//first step to make the combination, fixing the first few digits in each iteration.0 digits fixed in first combination,1 digit fixed in 2nd iteration,2 digits fixed in 3rd iteration and so on
		for(int j=c;j<(l-1);j++)// j will be used as counter for no of digits which will rotate in each iteration, n digits rotate in 1st iteration, n-1 digits rotate in 2nd iteration, n-2 digits rotate in 3rd iteration, and so on.
		{
			a[i]+=a[i-1].at(j+1);// second step to make the combination, rotating the digits.
		}
		a[i]+=a[i-1].at(i-1);// third step to make the combination, putting leftmost non-fixed digit to the rightmost after rotation.
		c++;
		cout<<a[i]<<" ";
	}
	int max=0;
	for(int i=0;i<l;i++)
	{
		stringstream g(a[i]);// type casting object from string to int
		int b=0;
		g>>b;// assigning value from object to int variable
		if(b>max)
			max=b;		
	}
	cout<<"\nThe greatest combination is: "<<max;
}
