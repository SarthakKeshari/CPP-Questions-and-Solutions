#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <6; i++)
    {
        for (int j = 0; j<7 ; j++)
        {
            if (j<1){
          for (int k = 0; k < 2; k++)
           {   
           cout<<'#'; 
           }
            }
             if (i==j){
            for (int k = 0; k < 2; k++)
                cout<<"@";
            }  else if (j==6){
                     for (int k = 0; k < 2; k++) {   
                         cout<<'#';  }
            }            
            else {
                cout<<" ";
            } 
        }
        cout<<endl;
    }
    return 0;
}
