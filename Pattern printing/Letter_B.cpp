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
