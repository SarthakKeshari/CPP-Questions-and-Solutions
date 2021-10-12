// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);   //Sort the Array of Arrival Time
    	sort(dep,dep+n);   //Sort the Array of Departure Time
    	int i=1,j=0;       //Two pointer one for arr and other for dep array
    	int plat=1,result=1; //plat contains platform needed  and result will contian the final answer to the problem
    	while(i<n and j<n)
    	{
    	    if(arr[i]<=dep[j])       
    	    {
    	        plat++;
    	        i++;
    	    }
    	    else
    	    {
    	        plat--;
    	        j++;
    	    }
    	    result=max(result,plat);
    	}
    	return result;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
