// https://leetcode.com/problems/climbing-stairs/

/*  You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

#include<iostream>
using namespace std;
int main(){
	
	// n = no. of stairs
	int n;
	cin>>n;
	
	int prev = 0;
    int cur = 1;
    int temp;
    
    for (int i = 0; i < n; i++) {
        temp = prev;
        prev = cur;
        cur += temp; 
    }
    cout<<cur;
}

        

