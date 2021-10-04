// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
bool cmp(Job arr1,Job arr2)
    {
        return arr1.profit>arr2.profit;
    }
class Solution 
{
    public:
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);   //Sorting the array in decreasing order of profit
        int cnt=0,profit=0;   //cnt will contain number of jobs done and profit will maximum profit obtained from jobs
        int slot[n]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead)-1;j>=0;j--)         //This loop check for available slots
            {
                
                if(slot[j]==0)
                {
                    profit+=arr[i].profit;
                    cnt+=1;
                    slot[j]=1;
                    break;
                }
            }
        }
        return {cnt,profit};
    } 
};

int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}
