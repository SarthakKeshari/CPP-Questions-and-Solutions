#include <iostream>

using namespace std;

int main()
{
    int arr []={1,3,5,7,9,5,2,9,9,2};
    int sum=0;

    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i] ;   
    }
    double average = sum/10.0;

    cout<<"Average: "<<average;


    return 0;
}