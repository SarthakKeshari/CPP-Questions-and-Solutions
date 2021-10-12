//C++ program to print the below pattern :-

/*
@@       ##
 @@     ##
  @@   ##
   @@ ##
    @@@
   ## @@
  ##   @@
 ##     @@
##       @@
*/

#include <iostream>
using namespace std;

int main()
{
int row,coloumn;

for(row=0; row<9; row++)       // here 9 is the total no. of rows.
{
 for(coloumn=0; coloumn<9; coloumn++)     // here 9 is the total no. of coloumns.
 {
     if(row==4 && coloumn==4)
    cout << "@@@";            // printing @@@ in the middle of the letter when rows=4 & coloumns=4

    else if(row==coloumn)          // prints the required characters when number of rows equals number of columns
    cout << "@@";

   else if((row+coloumn)==8)      //  prints the required characters when number of rows + number of columns equals (total rows-1)
   cout << "##";

    else
    cout << " ";            // prints a whitespace at places where characters are not printed.
 }
 cout << "\n";             // prints a newline at the end of each row.
}
return 0;
}


// This Code is contributed by Harshvardhan Singh (Username ----> cyberskull99297)
