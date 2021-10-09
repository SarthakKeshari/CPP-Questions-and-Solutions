/*
CPP Program to print Letter V


@@           @@
 @@         @@ 
  @@       @@  
   @@     @@   
    @@   @@    
     @@ @@     
      @@@      
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int level = 7;
  
  int firstSpaces = 0, lastSpaces = 0, midSpaces = 0;
  int i, cols = 2 * level + 1;

  //for printing pattern till last row
  for (i = 0; i < level - 1; ++i) {
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
    cout << endl;
  }
  //print last line
  cout << string(level - 1, ' ') << "@@@" << string(level - 1, ' ') << endl;

  return 0;
}
