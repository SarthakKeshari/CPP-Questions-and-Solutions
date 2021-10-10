#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr1[n];
	    int arr2[m];
	    int sumA=0,sumB=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	        sumA+=arr1[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>arr2[i];
	        sumB+=arr2[i];
	    }	    
	    int count=0;
	    while(sumA<=sumB)
	    {
	        int maxB=-1;
	        int minA=int(1e9);
	        int locA=-1,locB=-1;  //loc is location of Array1 and array2
	        for(int i=0;i<n;i++)
	        {
	            if(arr1[i]<minA)
	            {
	                minA=arr1[i];
	                locA=i;
	            }
	        }
	        for(int i=0;i<m;i++)
	        {
	            if(arr2[i]>maxB)
	            {
	                maxB=arr2[i];
	                locB=i;
	            }
	        }
	        if(minA>=maxB)
	        {
	            count=-1;
	            break;
	        }
	        count++;
           swap(arr1[locA],arr2[locB]);
	        sumA+=maxB-minA;
	        sumB+=minA-maxB;       
	    }
	    cout<<count<<endl;
	}
}
