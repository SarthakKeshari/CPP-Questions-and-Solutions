// 263A - Beautiful Matrix
// http://codeforces.com/problemset/problem/263/A
// importing the libraries
#include <iostream>
#include <cmath>

using namespace std;

// Defining the main Function
int main()
{
    int x = 0; // Initialising the integer X.
    for (int i = 1; i <= 5; ++i) 
    {
        for (int j = 1; j <= 5; ++j) // Opening a 'for' loop for taking the input
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl; // Here 'abs' returns the absolute value of the parameter
            }
        }
    }
    return 0; // Evidence that our code will terminate here
}