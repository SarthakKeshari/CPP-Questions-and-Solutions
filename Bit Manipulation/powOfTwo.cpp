#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    if (n & (n-1))
    {
        cout<<"no it is not power of 2";
    }else
    {
        cout<<"yes it is power of 2";
    }
    return 0;
}
