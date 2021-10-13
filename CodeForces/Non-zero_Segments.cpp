#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;//taking input the length of the array
    cin>>n;
    long long arr[n];
    for (int i = 0; i < n; i++)//taking input the array
    {
        cin>>arr[i];
    }
    map<long long,int> m;
    long long sum[n];//sum arrray to check whether the same sum repeats, and if it does, we have found a segment addign to zero
    m[0]++;//since zero is already there when we start, we put this into our map
    bool flag=1;//to detect whether we are in the middle of a segment or at the starting
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (flag==1)//if this is the starting, we simply put element at this index in the sum array
        {
            sum[i]=arr[i];
            m[sum[i]]++;//increment the elemene in map by 1
            flag=0;//change the flag
            continue;
        }
        //if we are in the middle of a segment
        sum[i] = sum[i-1]+arr[i];//insert sum[i-1] + the current element, into the sum array
        if (m[sum[i]])//if this sum was already found before
        {
            count++;//we increse count by 1, whihc means we are inserting some really big number in between
            m.clear();//clear the map again, since we'll be starting afresh from here
            m[0]++;
            i--;
            flag=1;//switch the flag
        }
        else{
            m[sum[i]]++;//and if this sum is new, we simply increment ita value in map by 1
        }
    }
    cout<<count<<endl;//print count
}