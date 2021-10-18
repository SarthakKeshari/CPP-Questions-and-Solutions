/*

This code prints the letter N, as shown below.

##@@       ##
## @@      ##
##  @@     ##
##   @@    ##
##    @@   ##
##     @@  ##
##      @@ ##
##       @@##

LOGIC:
We need to run nested loops here , like a matrix  i  for depth - 8, j for width - 8
First is the straight line "##",
that is covered by for (i = 0; i < 8; i++).
for i = 0 -  
we get ##@@       ##      
i = 1  ## @@      ##      
i = 2  ##  @@     ##      
.
.
.
and so on
counter increments on every completed cycle,
j handles the pattern on the horizontal i.e. printing "@@" and the second line of "##".
Hence we get the desired Pattern N.

*/

#include <iostream>
using namespace std;
 
// function to print the letter N Pattern
void printN()
 
{
    int i, j, counter = 0;
 
    //to print ## and @@
    for (i = 0; i < 8; i++) // taking i<8 to print "##" in a straight line, 7 times (n = 0 to 8).
    {
        cout <<"##"; //this prints "##" in a striaght line .
  
     // to print "@@".
        for (j = 0; j <= 8; j++) 
        {
            if (j == 8)  // to print the second line of "##" 
                cout <<"##";
            else if (j == counter) 
                cout <<"@@";
            else
                cout <<" "; //else print " " according to the pattern N required. 
        }
        counter++;
        cout <<"\n";
    }
}

int main(int argc, char** argv) //To print the function N 
{
  printN(); // Letter N as output
}
