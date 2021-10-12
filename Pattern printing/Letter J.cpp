//Write a program to print letter J exactly as shown 
#include <iostream> //class for handling input and output

using namespace std;

int main()
{
  int x, y;  //temporary variables to store the row and column number
  for(x=0 ; x<=8 ; x++) //to change row
  {
    for(y=0 ; y<=11 ; y++) //to change column
    {
      if((y!=5&&y!=6)&&x==0)
      {
        cout << "$";  //printing statement
      }
      else if(((y==5||y==6)&&x!=8)||(x==6&&(y==0||y==1))||(x==7&&(y==1||y==2))||(x==8&&(y==3||y==4)))
      {
        cout << "#"; //printing statement
      }
      else
      {
        cout << " "; //printing statement for space
      }
    }
    cout << "\n"; //printing statement for next line
  }
  return 0;
}
