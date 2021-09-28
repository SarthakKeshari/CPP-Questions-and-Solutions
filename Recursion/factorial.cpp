#include<iostream>
using namespace std;

int factorial(int i){
    if(i==1)
    return 1;

    return i*factorial(i-1);

}

int main(){
int number;
cout<<"Enter number : ";
cin>>number;
cout<<number<<" ! = "<<factorial(number);

}