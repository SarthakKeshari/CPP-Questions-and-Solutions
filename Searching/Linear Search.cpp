#include <iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<"Enter 10 elements\n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter number to be searched\n";
	int d,f=0;
	cin>>d;
	for(int i=0;i<10;i++)
	{
		if(a[i]==d)
		{
			cout<<"Number found at position: "<<(i+1);
			f=1;			
		}
	}
	if(f!=1)cout<<"Number not found";
}

// This code is contributed by Rajat Jain
