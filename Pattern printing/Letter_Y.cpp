//C++ program to print the below pattern :-

/*
@@        ##
 @@      ##
  @@    ##
   @@  ##
    @@##
     @@
     @@
     @@
     @@
*/

#include <iostream>
using namespace std;

int main()
{
int row,column;

for(row=0; row<9; row++)  // here 9 is the total no. of rows.
{
 for(column=0; column<=9; column++)    // here 9 is the total no. of columns.
 {
     if(row==4 && column==4)    // prints '@@' when rows=4 & column=4
    cout << "@@";

    else if(row==column && row<5)  // prints the required character when the number of row is less than 5.
    cout << "@@";

   else if((row+column)==9 && row<5)  // prints the required character when the number of row is less than 5.
   cout << "##";

   else if(column==5 && row>=5)       // prints the required character when the number of row is greater than or equal to 5.
    cout << "@@";

    else
    cout << " ";       // prints a whitespace at places where characters are not printed.

 }
 cout << "\n";            // prints a newline at the end of each row.
}

return 0;
}

// This Code is contributed by Harshvardhan Singh (Username ----> cyberskull99297)
