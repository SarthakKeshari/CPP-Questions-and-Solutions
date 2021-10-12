//Write a program to print letter W exactly as shown
#include <iostream> //class responsible for handling input and output

using namespace std;

int main()
{
    int x,y;  //temporary integer type variables to store row and column number
    for(x=0 ; x<=5 ; x++)  //To change the rows
    {
        for(y=0 ; y<=22 ; y++)  //To change the columns
        {
            if((x==y)||(y==(x+1))||((22-y)==x)||((22-y)==(x+1)))    
            {
                cout << "@";     //printing statement
            }
            else if(((x+y)==11)||((y-x)==11))
            {
                cout << "#";    //printing statement
            }
            else
            {
                cout << " ";    //printing statement for space
            }
        }
        cout << "\n";           //printing statement for next line
     }
     return 0;
}
