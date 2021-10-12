/**
You are given an array A consisting of N integers and an integer X. Your goal is to have as many equal integers as possible in the array. 
To achieve this goal, you can do the following operation:
Choose an index i (1 ≤ i ≤ N) and set Ai = Ai ⊕ X, where ⊕ denotes the bitwise xor operation
Find the maximum number of equal integers you can have in the final array and the minimum number of operations to obtain these many equal integers.
*/

// link to the problem -- https://www.codechef.com/problems/PALINT


/*******************************************************************************************************************************************************/


/**
  Property of XOR used
  A xor B xor B = A   i.e., number A xored with B twice results in itself 
  A xor A = 0
  A xor 0 = A
*/


//  solution in C++
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t = 1;
    cin >> t;       // storing the number of test cases
  
    // loop to run different test cases
    while(t--)
    {
        int n, x;                             //  n = size of array,  x = number to be XORed with
        cin >> n >> x;
        map<int, int> mp;                     //  map to store frequency of elements of array
        int max_freq = 0;                     //  to store maximum-frequency of an array element
      
      
        //  loop to take input and calculate frequency of each element
        //  this loop also calculates maximum frequency of an element
        for(int i=1; i <= n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;                           //  increasing frequency of 'a' by 1
            max_freq = max(max_freq, mp[a]);   //  calculating maximum frequency
        }
      
      
        int operations = 0;                    //  stores the number of operations to be made
      
      
        //  looping through map to calculate the required answer
        for (auto [key, value] : mp)
        {
          
            // key has the first value of map i.e., the array elements
            // value is the frequency of 'key' in given array
          
          
            int target = key ^ x;   
            int cnt = value;                  //  stores the number of times array elements can become = key 
          
            // if target == key then x becomes 0, hence no operations can be made
            
            if (target != key)
            {
                //  target != key,  then increrasing the numbers which can be converted to key by operating 'xor x' with them
                //  i.e., calculating operations to make maximum possible elements equal to 'key' 
                cnt += mp[target];
            }
          
            //  to find the maximum elements of array that can be made identical
            //  to store the number of operations made to make them equal to 'key'
            if (cnt > max_freq)
            {
                max_freq = cnt;
                operations = value;
            }
          
            //  in case two elements have same frequency after certain operations
            //  choosing the element which requires less operations
            //  i.e., calculating minimum of operations and cnt
            else if (cnt == max_freq)
            {
                operations = min(operations, value);
            }
        }
      
      
        //  displaying the ouput
        cout << max_freq << " " << operations << endl;
    }
    return 0;
}
