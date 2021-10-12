//https://codeforces.com/problemset/problem/339/A

/*Helpful Maths
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.
The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.
You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.

Sample Test Cases:
Test Case-1:
Input:
3+2+1
Output:
1+2+3

Test Case-2:
Input:
1+1+3+1+3
Output:
1+1+1+3+3
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m;
    int i, l, n1 = 0, n2 = 0, n3 = 0;
    cin>>m;
    l = m.length();
    for (i = 0; i < l; i++) //here we are calculating number of 1's, 2's and 3's 
    {
        if (m[i] == '1')
        {
            n1++;
        }
        else if (m[i] == '2')
        {
            n2++;
        }
        else if (m[i] == '3')
        {
            n3++;
        }
    }
    //after calculating the numbers, we simply print out the number of times it is present so loop will iterate from 0 to n1 and so on for every element

    for (i = 0; i < n1; i++) //this will print 1,2,3 and '+' simultaneously 
    {
        cout << '1';
        if ((n2 == 0 && n3 == 0) && i == n1 - 1) 
        {}
        else //until i is not equal to 0 print '+' and when i becomes equal to n1 it will go to new loop similarly with pther two cases
        {
            cout << '+';
        }
    }
    for (i = 0; i < n2; i++)
    {
        cout << '2';
        if (i == n2 - 1 && n3 == 0)
        {}
        else
        {
            cout << '+';
        }
    }
    for (i = 0; i < n3; i++)
    {
        cout << '3';
        if (i == n3 - 1)
        {}
        else
        {
            cout << '+';
        }
    }
    return 0;
}