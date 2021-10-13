//THIS PROGRAM IS ABOUT
// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
//header files included

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"**************************THIS PROGRAM IS ABOUT FINDING THE SUBARRAY WITH SUM EQUAL TO ZERO**************************"<<endl<<endl;
    
    //t here is used for defining the number of test cases
    int t;
    cout<<"Enter the number of times you want to run: "<<endl<<"  t:";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the length of the array: "<<endl<<"  n:";
        cin>>n;
        int arr[n];
        cout<<"Enter "<<n<<" numbers for the array: "<<endl<<"  ";
        //taken input from the user for the array
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int s=0;        //for storing the sum of the current array              
        int f=0;        //for storing the status whether the sum=0 exists or not
        unordered_map<int,int> m;           //defined an unordered map to keep a check whether a number has occured again
        for(int i=0;i<n;i++){
            s=s+arr[i];
            if(s==0 || m[s] || arr[i]==0){
                f=1;
                break;
            }
            else{
                m[s]=1;
            }
        }
        if(f==1){
            //printing Yes if the subarray with sum zero is present
            cout<<"  Yes"<<endl;
        }
        else{
            //printing No if the subarray with sum zero is not present
            cout<<"  No"<<endl;
        }
    }
    //here is the end of the program
    return 0;
}
