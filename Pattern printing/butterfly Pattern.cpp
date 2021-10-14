#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";      
    cin>>n;                               // taken a input from user
    for(int i=1;i<=n;i++){                //used for loop for *
        for(int j=1;j<=i;j++){
           cout<<"*";                     //printed *
        }
        int space=2*n-2*i;               
        for(int j=1;j<=space;j++){        // used for loop for Space
           cout<<" ";                     //printed space
        }
        for(int j=1;j<=i;j++){            //again used for loop for *
           cout<<"*";                     // printed *
        }
    cout<<endl;                           // line change
    }
    for(int i=n;i>=1;i--){                //used for loop for *
        for(int j=i;j>=1;j--){
           cout<<"*";                     //printed *
        }
        int space=2*n-2*i;
        for(int j=space;j>=1;j--){        // used for loop for Space
           cout<<" ";                     //printed space
        }
        for(int j=i;j>=1;j--){            //again used for loop for *
           cout<<"*";                     //printed *
        }
    cout<<endl;                           // line change
    }  
    return 0;
}
