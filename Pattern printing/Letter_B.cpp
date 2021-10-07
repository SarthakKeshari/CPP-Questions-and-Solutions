/*
This code prints the letter B, as shown below.

**#####
**     ##
**      ##
**     ##
**#####
**     ##
**      ##
**     ##
**#####
 
There are 3 distinct patterns featured in printing the letter B to console.
If we define those patterns as strings, and also define the order in which
they are printed, then we could iterate over the order and print the correct
pattern, resulting in the correct output. (i.e., the letter B)
*/
#include <iostream>

int main()
{
	std::string essentialStrings[3] = {"**#####", "**     ##", "**      ##"};
	int n = 9;
	int printIndices[9] = {0, 1, 2, 1, 0, 1, 2, 1, 0};
	for(int i=0; i < n; ++i)
	{
		std::cout << essentialStrings[ printIndices[i] ] << std::endl;
	}

	return 0;
}
