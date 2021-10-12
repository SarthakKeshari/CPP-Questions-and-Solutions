
   /*  
   
   
   This code sort even index array element in ascending order and odd index array element in descending order
   
   Input:
   5
   4 4 2 5 2
   
   Output:
   2 5 2 4 4
    
   */


#include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main() {

	int n,x,i,j;
	cin>>n;
	int array[n];
	
// 	vector even stores even index elements of array.
// vector odd stores odd index elements of array.

	vector <int> even,odd;
	for(x=0;x<n;x++){
	    cin>>array[x];
	    if(x%2==0){
	        even.push_back(array[x]);
	    }
	    else{
	        odd.push_back(array[x]);
	    }
	}
	
	// Sorting both the vectors in ascending order
	
	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end());
	
	i=0;
	j=odd.size()-1;
	
	// If index is even take value from even vector
	// Else take value from last of odd vector
	
	
	for(x=0;x<n;x++){
	    if(x%2==0){
	        array[x]=even[i];
	        i++;
	    }
	    else{
	        array[x]=odd[j];
	        j--;
	    }
	   // print the array
	    cout<<array[x]<<" ";
	}
	return 0;
}
