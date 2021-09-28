#include<iostream>

using namespace std;

int main()

{
    int a,b,c;
    cout<<"enter the number to be swaped:"<<endl;
    cin>>a>>b;

    cout<<"the numbers before the swapping are:"<<endl;
    cout<<a<<endl<<b<<endl;

    c=a;
    a=b;
    b=c;
    
    cout<<"the numbers after the swapping are:"<<endl;
    cout<<a<<endl<<b<<endl;
    
    return 0;
}