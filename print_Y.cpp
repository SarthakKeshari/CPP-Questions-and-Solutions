// C++ program to print Y in given format

#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

int main()
{
int r,c;

for(r=0; r<9; r++)
{
 for(c=0; c<9; c++)
 {
     if(r==4 && c==4)
    cout << "@@##";   // prints @@## in the middle row

    else if(r==c && r<5)
    cout << "@@";     // prints @@ in the left arm of Y

   else if((r+c)==8 && r<5)
   cout << " ##";     //prints ## in the right arm of Y

   else if(r>4 && c==5 )
    cout<<"@@";        //prints @@ in the lower half to form Y

    else
    cout << " ";       // prints adequate spaces.
 }
 cout << "\n";

}
return 0;
}

// This code is contributed by Shubham Srivastava
