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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Printing the pattern

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j < 2)
            {
                cout << "#";
            }

            else if ((i == 0 or i == 4) and j >= 2)
            {
                cout << "$";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}