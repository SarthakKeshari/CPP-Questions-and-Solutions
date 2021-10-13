#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,n,k,Max=-1,res=0;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            Max = max(Max,a[i]);
        }

        for(i=k-1;i<n;i++)
        {
            if(a[i]==Max)
            {
                res += n-i;
            }
        }
        cout<<res<<endl;

    }
    return 0;
}
