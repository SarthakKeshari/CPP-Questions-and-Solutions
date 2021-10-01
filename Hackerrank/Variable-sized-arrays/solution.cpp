//solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int noofarr,noofqueries; //initializing no:of arr variable and no:of queries
    cin>>noofarr>>noofqueries; //getting input 
    vector<vector<int>>bigarr; //declaring an vector array which contains vector arrays as elements
    for(int i=0;i<noofarr;i++){
        int arrsize,ele;
        cin>>arrsize;
        vector<int>smallarr; 
        for(int j=0;j<arrsize;j++){
            cin>>ele;
            smallarr.push_back(ele);
        }
        bigarr.push_back(smallarr);
        
    }
    for(int k=0;k<noofqueries;k++){
        int arrindex,eleindex;
        cin>>arrindex>>eleindex;
        cout<<bigarr[arrindex][eleindex]<<endl;
        
        
        
    }
    return 0;
}
