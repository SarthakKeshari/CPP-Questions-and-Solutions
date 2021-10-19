// Ques Link --> https://codeforces.com/contest/1399/problem/C

#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int t;                                    // stores number of test cases
	cin >> t;
	
	while (t--) {
 
		int n;                                // number of participants
		cin >> n;
		vector<int> a(n);                     // vector to store participants weight
		for (int i = 0;i < n;i++)
			cin >> a[i];
		
        int ans = 0;                          // stores the final maximum result
		for (int s = 1; s <= 100; s++) 
        {
			int count = 0;                    // counts number of teams formed with weight = s
			vector<int> used(100);            // auxiliary vector to store participants already used to create teams
			
      
            // loop to select first partcipant of the team
            for (int i = 0; i < n;i++) 
            {
				
                // if i-th participant is used move to next partcipant
                if (used[i] != 0)
					continue;
        
                // loop to select second participant of the team
				for (int j = i + 1;j < n;j++) 
                {
          
                    // if j-th participant is used move to next partcipant
					if (used[j] != 0) 
						continue;
          
                    // if i-th and j-th participants' weight equals s when added
					if (a[i] + a[j] == s) 
                    {						
                        // increment teams formed by 1
                        count++;
            
                        // mark the ith participant as used
						used[j]++;
            
                        // mark the jth participant as used
						used[i]++;
						break;
					}
				}
			}
            // calculating the max number of teams formed
			ans = max(count, ans);
		}
		cout<< ans << endl;
	}
}
