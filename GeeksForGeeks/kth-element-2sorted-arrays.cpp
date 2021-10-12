//Question- Given two sorted arrays of size m and n respectively, you are tasked with finding the element that would be at the k’th position of the final sorted array.


#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m)
        {
            return kthElement(arr2,arr1,m,n,k);   //Size of first array should be always less than the size of second array
        }
        
        int low=max(0,k-m),high=min(n,k);         //Two Endpoints for performing Binary Search
        while(low<=high)
        {
            int cut1=(low+high)/2;                 //Taking middle pointer of First Array
            int cut2=k-cut1;
            int l1=cut1==0?INT_MIN:arr1[cut1-1];
            int l2=cut2==0?INT_MIN:arr2[cut2-1];
            int r1=cut1==n?INT_MAX:arr1[cut1];
            int r2=cut2==m?INT_MAX:arr2[cut2];
            if(l1<=r2 and l2<=r1)
            {
                return max(l1,l2);
            }
            if(l1>r2)             //if the left half of first array has greater element then move the pointer to left
            {
                high=cut1-1;
            }
            else
            {
                low=cut1+1;       //if the left half of second array has greater element then move the pointer to right
            }
        }
        return 1;
        
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  
