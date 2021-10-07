// C++ program to print the below pattern

// ##$$$$$$$
// ##
// ##
// ##
// ##$$$$$$$
// ##
// ##
// ##
// ##

#include <iostream>
using namespace std;

int main() {
    // Printing the pattern

    // As the pattern is of 9x9 size, therefore a nested for-loop from 0-8 is peformed.
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            // To print the first two # columns.
            if (j < 2)
            {
                cout << "#";
            }

            // To print the $ rows.
            else if ((i == 0 or i == 4) and j >= 2)
            {
                cout << "$";
            }

            // To print the empty spaces.
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
