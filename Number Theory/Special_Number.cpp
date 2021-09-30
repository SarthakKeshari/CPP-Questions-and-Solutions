#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n==0)
        return 1;
    return (n*factorial(n-1));
}

int sum(int num){
    int s=0;
    while(num>0){
        s=s+factorial(num%10);
        num=num/10;
    }
    return s;
}

int main(){
    int number,add;
    cin>>number;
    add=sum(number);
    if(add==number)
        cout<<number<<" is a Special Number"<<endl;
    else
        cout<<number<<" is not a Special Number"<<endl;
	return 0;
}
