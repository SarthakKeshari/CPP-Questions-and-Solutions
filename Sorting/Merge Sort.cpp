// Question: Merge Sort Implementation
// Merge Sort #219

#include <iostream>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
                                    //divide the array at mid and sort independently using merge sort
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
                                     //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
}
// Merge sort 
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {   // Traverse both halves of the array
        if (arr[i] < arr[j]) {        // if an element of left half is less than element of right half
            c[k] = arr[i];            // if an element of left half is less than element of right half
            k++;
            i++;
        }
        else  {                       // otherwise store the element of the right half in the temporary array
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {                // If traversal of left half is done, copy remaining elements from right half to temporary
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {               // otherwise copy remaining elements from left half to temporary
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {       // recopy the values from temporary to original array.
        arr[i] = c[i];
    }
}

// read input array and call mergesort

int main()
{
    int myarray[30], num; 
    cout<<"Enter number of elements to be sorted:";
    
    cin>>num;
    cout<<"Enter "<<num<<" elements to be sorted:";
    for (int i = 0; i < num; i++) { cin>>myarray[i];
    }
    
    merge_sort(myarray, 0, num-1);
    
    cout<<"Sorted array\n";                                 //Print Sorted Array
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
}
