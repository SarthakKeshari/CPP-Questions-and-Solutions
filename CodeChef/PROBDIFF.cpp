/* You have prepared four problems. The difficulty levels of the problems are A1,A2,A3,A4 respectively. 
A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level. 
A problem can belong to at most one problem set. Find the maximum number of problem sets you can create using the four problems. 
            https://www.codechef.com/problems/PROBDIFF          */
#include<iostream>
using namespace std;

int main(){
    int t; 
    cin>>t;//inputing number of test cases
    if(t>=1 && t<=1000){
        while(t--){ //will repeat till variable t becomes 0
            int a,b,c,d; //problems
            cin>>a>>b>>c>>d;
            if(a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10 && d>=1 && d<=10){ //problems and their conditions
                if(a==b && b==c && c==d) cout<<"0\n";
                else if(a==b || a==c || a==d || b==c || b==d || c==d) cout<<"1\n";
                else if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) cout<<"2\n";
            }
        }
    }
    return 0;
}