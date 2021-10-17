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

*/

#include <iostream>
using namespace std;
 
// function to print the letter N Pattern
void printN()
 
{
    int i, j, counter = 0;
    for (i = 0; i < 8; i++) {
        cout <<"##";
        for (j = 0; j <= 8; j++) {
            if (j == 8)
                cout <<"##";
            else if (j == counter)
                cout <<"@@";
            else
                cout <<" ";
        }
        counter++;
        cout <<"\n";
    }
}
int main(int argc, char** argv)
{
  printN();
}
