/*
the basic approach to solve this problem is to declare an extra array , 2 maps. the first array will be storing the XOR value of the given array elements with the given number
what we will be doing is int the first map we will the count of each element of the given array and in the second map we will be storing the count of the elements of the second
array which we got after XOR operation which will be the no of operation for each element. and last what inportant is to find which is the (sum of) maximum count of the elements
present in both maps i.e suppose we got that in array 1,4,3,2,3 and after xor operation we got second array as 1,3,4,2,2 so here the element 3 and 2 are occuring 3 times 
but element 2 takes 2 operations while 3 takes just 1 operation so we will be printing << count of 3 in both the array << " " << the count of 3 in second map 
*/

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << 1 << " " << 0 << endl;   // if n is equal to 1
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            map1[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            arr2[i] = (arr[i] ^ x);
        }
        for (int i = 0; i < n; i++)
        {
            map2[arr2[i]]++;
        }
      // till line 64 this is a another condition if x is == 0 
        int g = 0, z = 0;
        for (auto &it : map1)             
        {
            if (it.second == n)
            {
                g = n;
                break;
            }
            if (it.second >= g)
            {
                g = it.second;
            }
        }
        if (x == 0)          
        {
            cout << g << " " << z << endl;
            continue;
        }
        int s = map1[arr[0]] + map2[arr[0]];
        int p = arr[0];
        int j = map2[arr[0]];
        for (int i = 1; i < n; i++)
        {
            if (s < (map1[arr[i]] + map2[arr[i]]))
            {

                s = map1[arr[i]] + map2[arr[i]];
                p = arr[i];
                j = map2[arr[i]];
            }
            else if (s == (map1[arr[i]] + map2[arr[i]]))
            {
                if (map2[arr[i]] < j)
                {
                     s = map1[arr[i]] + map2[arr[i]];
                p = arr[i];
                j = map2[arr[i]];
                }
            }
        }
        cout << map1[p] + map2[p] << " " << map2[p] << endl;
    }
    return 0;
}
