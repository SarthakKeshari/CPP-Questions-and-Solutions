#include <bits/stdc++.h>
using namespace std;
// Question:
// Sort the elements of the array in non-decreasing order using insertion sort.

// This function is called by reference.
void insertionSort(vector<int>& nums)
{
	int i, key, j, n=nums.size();
	for (i = 1; i < n; i++)
	{
		// To sort the array we will first pick the ith element as key.
		// And find the proper position for it.
		// The position before that all elements in the array are smaller than key.
		// We will shift all the elements from that position to right of it.
		key = nums[i];
		j = i - 1;
		
		// This while loop will shift the elements in right.
		while (j >= 0 && nums[j] > key)
		{
			// j+1th element takes the value of jth element
			nums[j + 1] = nums[j];
			j = j - 1;
		}
		
		// The loop will stop once we find the correct position.
		// And j+1 is the correct position for that particular element.
		nums[j + 1] = key;
	}
}

int main()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    insertionSort(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }

	return 0;
}
