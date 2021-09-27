#include<iostream>
using namespace std;
int main()
{
    int arr[100], i, n;
    cout<<"Enter No. of Elements: ";
    cin>>n
    cout<<"Enter Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(n-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
