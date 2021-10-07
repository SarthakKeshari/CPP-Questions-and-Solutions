/*
This code prints the letter A, as shown below.

     **
   **  **
  **    **
 **      **
**        **
**########**
**        **
**        **
**        **
 
There are 6 distinct patterns featured in printing the letter A to console.
If we define those patterns as strings, and also define the order in which
they are printed, then we could iterate over the order and print the correct
pattern each time, resulting in the correct output. (i.e., the letter A)
*/
#include <iostream>

int main()
{
	std::string essentialStrings[6] = {"     **", "   **  **", "  **    **", " **      **", "**        **", "**########**"};
	int n = 9;
	int printIndices[9] = {0, 1, 2, 3, 4, 5, 4, 4, 4};
	for(int i=0; i < n; ++i)
	{
		std::cout << essentialStrings[ printIndices[i] ] << std::endl;
	}

	return 0;
}

