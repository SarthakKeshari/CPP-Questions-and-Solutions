#include <iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int i, ar, max, index;
        int l[n], r[n];
        for (i = 0; i < n; i++)
            cin >> l[i];
        max = 0;
        for (i = 0; i < n; i++)
        {
            cin >> r[i];
            ar = l[i] * r[i];
            if (ar > max)
            {
                max = ar;
                index = i;
            }
            else if (ar == max)
            {
                if (l[i] < l[index])
                {
                    max = ar;
                    index = i;
                }
            }
        }
        cout << index + 1 << endl;
    }
    return 0;
}
