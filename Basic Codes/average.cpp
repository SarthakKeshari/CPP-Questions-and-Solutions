// write the program for calculation average of 10 marks
#include <iostream>

using namespace std;

int main()
{
    int arr []={1,3,5,7,9,5,2,9,9,2}; //taken 10 marks of students 
    int sum=0;

    for(int i=0;i<10;i++) // traversing the array 
    {
        sum=sum+arr[i] ;   
    }
    double average = sum/10.0;

    cout<<"Average: "<<average;


    return 0;
}