/* Chef and Divyam are playing a game with the following rules:

First, an integer X! is written on a board.
Chef and Divyam alternate turns; Chef plays first.
In each move, the current player should choose a positive integer D which is divisible by up to Y distinct primes and does not exceed the integer currently written on the board. Note that 1 is not a prime.
D is then subtracted from the integer on the board, i.e. if the integer written on the board before this move was A, it is erased and replaced by A−D.
When one player writes 0 on the board, the game ends and this player wins.
Given X and Y, determine the winner of the game.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers X and Y.

Output
For each test case, print a single line containing the string "Chef" if Chef wins the game or "Divyam" if Divyam wins (without quotes).

Constraints
1 ≤ T ≤ 10^6
1 ≤ X, Y ≤ 10^6 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p=1e6+1;
    int cnt[p];
    int isprime[p];
    for(int i=0;i<p;i++){
        isprime[i]=1;
    }
    
    // Sieve of Eratosthenes
    for(int i=2;i*i<p;i++){
        if(isprime[i]==1){
            for(int j=i*i;j<p;j+=i){
                isprime[j]=0;
            }
        }
    }
    
    // cnt[i] array stores the count of prime numbers less that equal to i 
    cnt[0]=0;
    cnt[1]=0;
    for(int i=2;i<p;i++){
        cnt[i]=cnt[i-1]+isprime[i];
    }
    
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        // If x is divisible by the product of first (y+1) prime numbers, then it will be the losing state i.e. Chef will lose
        if(cnt[x]>=y+1){
            cout<<"Divyam\n";
        } // If x is not divisible by the product of first (y+1) prime numbers, then it will be the winning state
        else{
            cout<<"Chef\n";
        }
    }
}
