//C++ program to find the lexicographically smallest possible sequence of elements in the deque 
//after the entire permutation has been processed.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //Taking input for t->number of test cases
    cin >> t;      
    while (t--)
    {
        int n;
        //Taking input for n->permutation size
        cin >> n;         
        vector<int> v(n); 

        //Taking inputs for elements of the permutation.      
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        //Creating a deque 
        deque<int> d;

        //Adding first element in the deque
        d.push_back(v[0]);
        for(int i=1;i<n;i++)
        {
            if(d[0]>v[i])
            {
                d.push_front(v[i]);      //Adding elements at the beginning if it smaller than the first element
            }
            else{
                d.push_back(v[i]);       //Adding elements at the end if it is greater than the first element
            }
        }

        //Printing the elements of the deque 
        cout<<d[0];
        for (int i = 1; i < n; i++)
        {
            cout << " " << d[i];
        }
        cout << endl;
    }
    return 0;
}