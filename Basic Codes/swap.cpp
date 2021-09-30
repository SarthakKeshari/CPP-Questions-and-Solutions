		// Swap two numbers without using third variable
#include<iostream>
using namespace std;
int main() {
	
//	Assume x = 32, y = 35 belongs to Natural number.

	int x = 32, y = 35;
	
	cout<<"Before swapping" <<endl;
	cout<< "x = " << x << ", y = " << y << endl;
	
	x = x + y;		/* Expression to swap the number*/
	y = x - y;
	x = x - y;
	
	cout<<"After swapping" <<endl;
	cout<< "x = " << x << ", y = " << y << endl;
	

}
