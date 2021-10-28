//We have to return thr index of an array which is sorted and then rotated (we dont know how)
#include <bits/stdc++.h>
using namespace std;
int search_array(int a[],int n, int target){
    int low=0,high = n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(target== a[mid]){
            return mid;
        }
        if(a[mid]<=a[high]){
            if(target> a[mid] && target<= a[high]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }

        }
        else{
            if(target >= a[low]&& target< a[mid]){
                high =mid-1;

            }
            else{
                low=mid+1;
            }
        }
        
            }
            return -1;
}

int main()
{
  int a[]={12,14,18 ,21,25,58,59};
  int target = 58;
  int n= 7;
  int index= search_array(a,  n, target);
  cout<<index<<endl;
}
