/*
This code prints the letter C, as shown below.

    #####
  **     **
 **       **
##
##
##
##
##
 **       **
  **     **
    #####
 
There are 4 distinct patterns featured in printing the letter C to console.
If we define those patterns as strings, and also define the order in which
they are printed, then we could iterate over the order and print the correct
overall pattern, resulting in the correct output. (i.e., the letter C)
*/
#include <iostream>

int main()
{
	std::string essentialStrings[4] = {"    #####", "  **     **", " **       **", "##"};
	int n = 11;
	int printIndices[11] = {0, 1, 2, 3, 3, 3, 3, 3, 2, 1, 0};
	for(int i=0; i < n; ++i)
	{
		std::cout << essentialStrings[ printIndices[i] ] << std::endl;
	}

	return 0;
}

