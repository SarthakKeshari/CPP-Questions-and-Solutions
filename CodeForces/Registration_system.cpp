
//C.Registration system
// que link --> https://codeforces.com/problemset/problem/4/C
/*A new e-mail service "Berlandesk" is going to be opened in Berland in the near future. The site administration wants
to launch their project as soon as possible, that's why they ask you to help. You're suggested to implement the prototype 
of site registration system. The system should work on the following principle.

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into 
the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a 
new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with
1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.
*/
#include <bits/stdc++.h>
#include<string>
#include<unordered_map>
#define ll long long
#define lli unsigned long long
  using namespace std;
int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
       ll n ;
       cin >> n;
       unordered_map <string,ll> mp; // creating a unordered map of string and int
       while (n--)
       {
          string s;
          cin >> s; //input string
          if(mp.find(s)==mp.end()) // cheaking string is already in map o not
          { 
              cout << "OK"<<endl; // if it is not in the map print ok
              mp[s]++; // include it in map
          }else{
              cout << s << mp[s] <<endl; // print string along with its frequwncy
              mp[s]++;// increment the frequency of string
          }
       }  
    }
   

}
