// GFG Link to question  - https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

// This Code is Contributed by RAKSHIT PANDEY (Username-----> Master-Helix)


// Function to print the Next Greater Element using Stack

vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long>v;  // to store the output
        
        v.push_back(-1);    // for rightmost element . no right element present
        stack<long long>s;
        s.push(arr[n-1]);  //rightmost at top
        for(int i=n-2;i>=0;i--)  // iterating backwards
        {
            if(arr[i]<s.top())  // here the top will be nearest right neighbour which is greater so push in vector
            {
                v.push_back(s.top());
                s.push(arr[i]);  // update the stack top
            }
            else
            {
                while(!s.empty() && s.top()<=arr[i])  // if stack is empty, them no next greater present, so push -1 in vector
                {
                    s.pop();                  // if nearest greater found, push that in vector
                }
                if(s.empty())
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top());
                }
                s.push(arr[i]);   // update the top at each traversal
            }
        }
        
        reverse(v.begin(),v.end());      // to print output from left to right , reversing of output vector is done
        return v;    // return the output vector
    }
