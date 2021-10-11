/*
CPP Program to print Letter M

##@@      @@##
## @@    @@ ##
##  @@  @@  ##
##    ##    ##
##          ##
##          ##
##          ##
##          ##    


Letter M can be broken down into 3 parts
- full length first ## column
- half length V letter
- full length last ## column
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int level = 8;
  int vLevel = level/2;
  
  int firstSpaces = 0, lastSpaces = 0, midSpaces = 0;
  int i, cols = 2 * vLevel + 2;

  //for printing pattern till last row
  for (i = 0; i < level; ++i) {
    cout << "##";
    if (i < vLevel -1) {
        firstSpaces = i;
        lastSpaces = i;
        midSpaces = cols - firstSpaces - lastSpaces - 4; //for @@ and @@

        //print leading spaces
        cout << string(firstSpaces, ' ');
        //print @@
        cout << "@@";

        //print mid spaces
        cout << string(midSpaces, ' ');
        
        //print @@
        cout << "@@";
        
        //print last spaces;
        cout << string(lastSpaces, ' ');
    }
    else if (i == vLevel -1) {     //last level of V
        cout << string(i + 1, ' ') << "##" << string(i + 1, ' ');
    }
    else {
        cout << string(cols, ' ');
    }
    cout << "##";
    cout << endl;
  }
  return 0;
}
