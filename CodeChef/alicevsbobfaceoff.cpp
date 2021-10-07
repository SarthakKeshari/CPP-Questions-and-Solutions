#### Name: Alice vs Bob Faceoff 
#### Language: C++
#### Platform: Codechef
#### Question: https://www.codechef.com/LTIME100B/problems/ALBOFACE

#### Question Statement
Alice and Bob have got an integer N. They decide to play a game. Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, 
Alice makes the third one, and so on. The game continues until N becomes 0. The player who is unable to make a move loses.
During each turn a player can make one of the following moves:
Choose an integer X such that X can be expressed as 2Y, Y≥1. The chosen X must also be a factor of N. After choosing an integer X which satisfies the mentioned criteria,
the player will divide N by X.
If Move 1 is not possible , the player will subtract 1 from N.
Predict the winner of the game if the game is played optimally by both the players.

#### Solution:

```
#pragma GCC optimize("Ofast")
//used for speeding up code
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
//including header file
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
const long double Pi = 3.141592653;
const ll mod=1e9+7;
long long INF =1000000000000000000;
//defined different constants above
struct mycmp
{
//defining structure named mycmp
    bool operator()(pair<int,int>a,pair<int,int>b)const
    // boolean function taking a and b vector as parameters
    {
        return (a.first<b.first) || (a.first==b.first && a.second>b.second);
        //comparision of 'first' of vectors OR returning if first of a equals first of b and second of a greater than second of b
    }
};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    //initializing t 
    while(t--)
    //it checks if t value is true(i.e if it is non zero) and then decrements t by 1
    {
        ll n;cin>>n;
        if(n==1)
        {
            cout<<"Alice\n";
            //if the value of n is one then alice is declared winner
        }
        else
        {
            if(n&1LL)
            //if n . 1ll is true(i.e non zero) then condition satisfies
            
            {
                n=n-1;
                ll cnt=0;
                while(n)
                {
                    ll cnt1=0;
                    // we initialize a variable cnt1
                    while(n%2==0)
                    //while n is even
                    n=n/2,++cnt1;
                    n=n-1;
                    if(cnt1>=2)
                    //if cnt1 value greater than 2, then increment cnt by 1
                    ++cnt;
                }
                if(cnt>=2)
                cout<<"Bob\n";
                //if value of cnt is greater than 2 then we consider bob as the winner
                else
                {
                    if(cnt==0)
                    cout<<"Alice\n";
                    // if value of cnt is 0 then alice wins the game
                    else
                    cout<<"Bob\n";
                    //if value isnt 0 then bob wins
                }
            }
            else
            {
                ll cnt=0;
                //assigning variable cnt as 0
                while(n) 
                //till the n value is 0, the loop will run
                {
                    ll cnt1=0;
                    while(n%2==0)
                    //when n is even the loop will run
                    n=n/2,++cnt1;
                    //we change the value of n to the half of its value and increment cnt1
                    n=n-1;
                    //now we decrement n value by 1
                    if(cnt1>=2)
                    ++cnt;
                    //if value of cnt1 is greater than 2 we will increment cnt
                }
                if(cnt>=2)
                cout<<"Alice\n";
                //if the cnt value is greater than or equal to two, alice wins the game
                else
                {
                    if(cnt==0)
                    cout<<"Bob\n";
                    // if value of count is 0 then bob wins
                    else
                    cout<<"Alice\n";
                    //else if the value is anything except 0 then alice wins
                }
            }
        }
    }
}

```
