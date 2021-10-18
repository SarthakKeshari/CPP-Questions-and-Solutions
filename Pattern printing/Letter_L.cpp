/*
This code prints the letter L, as shown below.

##
##
##
##
##
##
##
##&&&&&&&

LOGIC:
The letter pattern can be divided into two parts, 
one-> is the "##" part - printed in a straight line for 7 times, for this we run a for loop ,
second-> is the "##&&&&&&&" part - this can be printed directly as printf("##&&&&&&&\n").

Hence we get the complete pattern.

*/

#include <iostream>
using namespace std;
int main()
{
	//To print ## 
	for(int i=0; i < 7; ++i) //printing ## in this loop for 7 times (n = 0 to 7)
	{
		printf("##\n"); // in a straight line 
		
	}
printf("##&&&&&&&\n"); //print one line "##&&&&&&&" to complete the last line of the letter L
	
	return 0; //we get the letter L pattern with the charecters needed.
}
