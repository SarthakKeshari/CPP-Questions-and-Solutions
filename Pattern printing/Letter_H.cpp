// C++ program to print the below pattern
/*
	##     ##
	##     ##
	##     ##
	##     ##
	##$$$$$##
	##     ##
	##     ##
	##     ##
	##     ##
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	//For printing the 9*9 letter H.
	for(int i = 0;i<9;i++){
		for(int j = 0;j<9;j++){
			//For printing the First two and last two columns.
			if(j<2 ||(j>=7 && j<9)){
				cout << '#';
			}else{
				if(i==4){
					//For printing the Middle Lyer of $ sign
					cout << '$';
				}else{
					cout << ' ';
				}
			}
		}
		cout << '\n';
	}
	return 0;
}
