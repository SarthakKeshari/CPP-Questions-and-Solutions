// Including extra header files for using ordered set which is a policu based data strcture and is not present in the standard template library.
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

//defining the ordered set
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n; //taking the size of the array
        ordered_set s;//declaring an ordered set s to be able to use the order_of_key operation
        deque<int> q;//declaring a deque q to store the answer
        map<int,int> m;//declaring a map m to store the frequency of numbers
        int arr[n];//declarifng an integer array arr for storing the numbers
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        //first number gets inserted in the deque without any issue and we insert that number in the ordered set at the same time and increment the value of this element by 1.
        q.push_back(arr[0]);
        s.insert(arr[0]);
        m[arr[0]]=1;
        long long ans=0,temp1=0,temp2=0;

        //we'll now run a loop from 1 to n, and judge its correct insertion, whether at the front or the back.
        for (int i = 1; i < n; i++)
        {
            temp1 = s.order_of_key(arr[i]);//storing the number of integers smaller than the number we are going to insert
            temp2 = i-temp1-m[arr[i]];//storing the number of integers greater than the number we are going to insert
            

            if (temp1>temp2)//if the number of integers greater to the current number is smaller than the number of integers samller to it, we push the integer at the back.
            {
                q.push_back(arr[i]);
            }
            else{//if the number of integers greater to the current number is greater or equal than the number of integers samller to it, we push the integer at the front.
                q.push_front(arr[i]);
            }

            ans+=min(temp1,temp2);//storing the number of inversions
            s.insert(arr[i]);//inserting the current number back to the ordered set
            m[arr[i]]++;
        }
        cout<<ans<<endl;//printing the answer
    }
}