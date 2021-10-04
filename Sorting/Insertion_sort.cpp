#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums)
{
	int i, key, j, n=nums.size();
	for (i = 1; i < n; i++)
	{
		key = nums[i];
		j = i - 1;
		while (j >= 0 && nums[j] > key)
		{
			nums[j + 1] = nums[j];
			j = j - 1;
		}
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
