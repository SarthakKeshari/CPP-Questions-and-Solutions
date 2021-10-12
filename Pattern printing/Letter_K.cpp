//Question:
/* Write a CPP Program to print the below pattern:

##    @@
##   @@
##  @@
## @@
##@@
## @@
##  @@
##   @@
##    @@

*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;//there are a total of n rows in the pattern
    cin>>n;//taking input as number of rows in the letter
    //loop for the first/upper half of the letter K
    for (int i = 0; i < n-n/2; i++)
    {
        cout<<"##";//printing first ## in every row
        for (int j = 0; j < n-n/2-i-1; j++)
        {
            cout<<" ";//printing spaces whihc decrease in the upper half
        }
        cout<<"@@"<<endl;//printing @@ at the end in every row
    }
    //loop for the second/lower half of the letter K
    for (int i = 0; i < n/2; i++)
    {
        cout<<"##";//printing first ## in every row
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";//printing spaces whihc decrease in the upper half
        }
        cout<<"@@"<<endl;//printing @@ at the end in every row
    }
}