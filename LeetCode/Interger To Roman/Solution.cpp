#include <iostream>
using namespace std;

class Solution
{
public:
    // Member function will return the anwser of string datatype
    string intToRoman(int number)
    {
        // Declaring an integer array of all type of possible numbers to convert it into Roman.
        int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        // Declearing a string array which will contain all type of possible Romans 
        string s[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int i = 12;
        string ans = "";    // Taking default answer as an empty string 
        while (number > 0)  // initiates the while loop.
        {
            int div = number / num[i];
            number = number % num[i];
            while (div--)
            {
                ans += s[i];
            }
            i--;
        }
        return ans; // Returning the finial answer
    }
};

// { Driver Code Starts.
int main()
{
    //calling method intToRoman() with number.
    Solution s;
    s.intToRoman(3);

    return 0;
}
