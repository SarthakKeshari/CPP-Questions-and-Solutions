#include <iostream>
using namespace std;
int main()
{
	cout<<"No. of entries: \n";
	int n;
	cin>>n;
	int a[n],t;//an array with size n and a temporary variable that will later be used for swapping
	cout<<"Enter "<<n<<" colors, use 0 for Red, 1 for White and 2 for Blue.\n";// if n=5, "Enter 5 colors,use 0 for Red, 1 for White and 2 for Blue."
	for(int i=0;i<n;i++)
	{
		cout<<"-> ";
		cin>>a[i];
		cout<<"\n";
	}// shows output as: "->0
	//					  ->2
	//					  ->1 and so on
	for(int i=0;i<n;i++)//traverses linearly to each element
	{
		for(int j=i;j<n;j++)// checks element at position i with each element in front of it
		{
			if(a[j]<a[i])// if smaller element is found
			{
				t=a[j];// swapping
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";//display
	}
}//end of main
