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
    cout << "@@##";

    else if(r==c && r<5)
    cout << "@@";

   else if((r+c)==8 && r<5)
   cout << " ##";

   else if(r>4 && c==5 )
    cout<<"@@";

    else
    cout << " ";
 }
 cout << "\n";

}
return 0;
}
