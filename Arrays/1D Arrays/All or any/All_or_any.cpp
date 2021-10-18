/*You are given a space-separated list of integers. If all the integers are positive, then you need to check if any integer is a palindromic integer.
Print "True" if all the conditions of the problem statement are satisfied. Otherwise, print "False".
Conditions--

1. All the integers are positive.
2. At least one integer is a palindrome, note that all the single-digit numbers are palindrome.            */


#include <iostream>

using namespace std;

int main ()
{
  int n;
	
  cout << "Enter the number of inputs you want to check: ";      //to input the number of values to be checked
  cin >> n;
	
  int s[n];                         //array to store the values
  int counter = 0;                  //to count the number of plaindrome numbers in the array
  int pos = 0;                      //to count the number of positive numbers in the array
	
  for (int i = 0; i < n; i++)           //to input the array
    {
      cin >> s[i];
    }

  for (int j = 0; j < n; j++)           
    {
      if (s[j] > 0)
	{
	  pos++;                                 //pos variable increases by one if the number is positive
	      
	  int p, num;
	  p = s[j];                              //to store the given number in another variable, so that it could be used in the loop to check if it's palindrome or not
	  num = s[j];
	      
	  int y = 0;
          int d = 0;
	  
	      while (p > 0)                      //to check if the number is plaindrome or not
		{
		  d = p % 10;
		  y = (y * 10) + d;
                  p = p / 10;
		}
		
	      if (num == y)                      
		{
		  counter++;                         //counter increases by one if the given number is palindrome
		}
	      
	        y = 0;
	}
	
    }

  if (pos == n)                                      //checks if the number of values given by user is equal to the number of positive numbers
      {
      
	  if (counter >= 1)                        //checks if their is atleast one palindrome number
	    {
	       cout << "True";                     //prints true if both the conditions are true
	    }
          else
	    {
	       cout << "False";                      //prints false if their is not a single palindrome number in the given array
	    }
	  
      }
  else
    {
      cout << "False";                              //prints false if all the given numbers are not positive
    }

	
  return 0;
}
