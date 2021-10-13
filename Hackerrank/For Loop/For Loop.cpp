// QUESTION:- 

// A for loop is a programming language statement which allows code to be repeatedly executed.

// The syntax is

// for ( <expression_1> ; <expression_2> ; <expression_3> )
 //   <statement>
// expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
// expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
// expression_3 is generally used to update the flags/variables.
// A sample loop is

// for(int i = 0; i < 10; i++) {
//    ...
// }
// In this challenge, you will use a for loop to increment a variable through a range.



// Logic:-  You will be given two positive integers, a and b (a<=b), separated by a newline.

//            For each integer n, in the interval [a,b]:
//            If 1<=n<=9 then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
//            Else if n>9 and it is an even number, then print "even".
//            Else if n>9 and it is an odd number, then print "odd".




// SOLUTION:-   For loop based.


#include<bits/stdc++.h>
using namespace std;
int main()
{   // Variable a,b
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
   cin>>a>>b; //Here cpp takes users value and run it.
    for(int i=a;i<=b;i++) // Here for loop starts.
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl; //At this point answer is reflected.
}
