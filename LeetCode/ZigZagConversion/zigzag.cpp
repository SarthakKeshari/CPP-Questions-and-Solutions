#include<iostream>
using namespace std;

class Solution{
    public:
        string convert(string s, int numRows){
            // Corner Case (Only one row)
            string res;
            if (numRows == 1)
            {
                cout << s;
                res=s;
            }
            else{
                // Find length of string
                int len = s.length();

                // Create an array of strings for all n rows
                string arr[numRows];

                // Initialize index for array of strings arr[]
                int row = 0;
                bool down; // True if we are moving down in rows,
                           // else false

                // Traverse through given string

                for (int i = 0; i < len; ++i)
                {
                    // append current character to current row
                    arr[row].push_back(s[i]);

                    // If last row is reached, change direction to 'up'
                    if (row == numRows - 1)
                        down = false;

                    // If 1st row is reached, change direction to 'down'
                    else if (row == 0)
                        down = true;

                    // If direction is down, increment, else decrement
                    (down) ? (row++) : (row--);
                }

                // Print concatenation of all rows
                for (int i = 0; i < numRows; ++i)
                    res += arr[i];
                
            }
            return res;
            }
            
};
//Driver code starts.
int main(){
    Solution s;
    s.convert("PAHNAPLSIIGYIR", 3);

    return 0;
}