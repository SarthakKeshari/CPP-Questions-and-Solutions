/*Question
  Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash
  to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an
  attempted transaction. 
  https://www.codechef.com/problems/HS08TEST         */

/* Input
  Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
  Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance. */

/* Output
   Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the
   transaction, output the current bank balance. */


#include<iostream>
using namespace std;

int main(){
  
    int withdraw;
    double balance;
    cin >> withdraw >> balance;
  
    if (withdraw % 5 == 0 && withdraw + 0.5 <= balance)
    {
        cout << balance - withdraw - 0.5 << endl; 
    }
    else
    {
        cout << balance;
    }
    return 0;
}
