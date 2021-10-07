

/*


This code will print pattern like this......

@@@@@@@@@
      ## 
     ##  
    ##   
  ##    
  ##     
 ##      
@@@@@@@@@



*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	for(x=0;x<8;x++){
	    for(y=0;y<9;y++){
	        if(x==0 || x==7){
	            cout<<"@";
	        }
	        else{
	            if(y==(9-x-2)){
	                cout<<"##";
	                y++;
	            }
	            else{
	                cout<<" ";
	            }
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
