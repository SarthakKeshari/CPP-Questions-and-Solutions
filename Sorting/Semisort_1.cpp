// C++ program to print first half in
// ascending order and the second half
// in descending order or Vice Versa
#include <bits/stdc++.h>
using namespace std;

void printOrder(int arr[], int n,string s)
{
	// sorting the array
	sort(arr, arr + n);
    if(s=="AD"||s=="ad")
    {
        // printing first half in ascending
	// order
        for (int i = 0; i < n / 2; i++)
		cout << arr[i] << " ";

	// printing second half in descending
	// order
	for (int j = n - 1; j >= n / 2; j--)
		cout << arr[j] << " ";	
    }
    else
    {

	// printing first half in Descending
	// order
	for (int i = n - 1; i>= n / 2; i--)
		cout << arr[i] << " ";

	// printing second half in Ascending
	// order
	for (int j = 0; j < n / 2; j++)
		cout << arr[j] << " ";	
    }
}


int main()
{
    int m;
	int arr[50];
    string s;
    cout<<"enter Sorting Style ";
    cin>>s;
    cout<<"enter how many elements ";
    cin>>m;
    cout<<"Enter Element ";
    for(int i=0;i<m;i++)
    {
       
        cin>>arr[i];
    }
   
printOrder(arr,m,s);
   

	return 0;
}
