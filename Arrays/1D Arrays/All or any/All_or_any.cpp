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
	
  cout << "Enter the number of inputs you want to check: ";
  cin >> n;
	
  int s[n];
  int counter = 0;
  int pos = 0;
	
  for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }

  for (int j = 0; j < n; j++)
    {
      if (s[j] > 0)
	{
	  pos++;
	      
	  int p, num;
	  p = s[j];
	  num = s[j];
	      
	  int y = 0;
          int d = 0;
	  
	      while (p > 0)
		{
		  d = p % 10;
		  y = (y * 10) + d;
                  p = p / 10;
		}
		
	      if (num == y)
		{
		  counter++;
		}
	      
	        y = 0;
	}
	
    }

  if (pos == n)
      {
      
	  if (counter >= 1)
	    {
	       cout << "True";
	    }
          else
	    {
	       cout << "False";
	    }
	  
      }
  else
    {
      cout << "False";
    }

	
  return 0;
}
