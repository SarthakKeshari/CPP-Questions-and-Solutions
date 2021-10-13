// SANYAM JAIN //
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
