/*
This code prints the letter T, as shown below.

$$$$$$$$$$$$
     @@     
     @@     
     @@     
     @@     
     @@     
     @@     

*/
#include <stdio.h>

int main()
{
	printf("$$$$$$$$$$$$\n");
	for(int i=0; i < 6; ++i)
	{
		printf("     @@\n");
	}

	return 0;
}
