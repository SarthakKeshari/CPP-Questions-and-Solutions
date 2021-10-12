//https://www.codechef.com/problems/FAIRELCT

/*Elections are coming soon. This year, two candidates passed to the final stage. One candidate is John Jackson and his opponent is Jack Johnson.

During the elections, everyone can vote for their favourite candidate, but no one can vote for both candidates. Then, packs of votes which went to the same candidate are formed. You know that for John Jackson, there are N packs containing A1,A2,…,AN votes, and for Jack Johnson, there are M packs containing B1,B2,…,BM votes.

The winner is the candidate that has strictly more votes than the other candidate; if both have the same number of votes, there is no winner. You are a friend of John Jackson and you want to help him win. To do that, you may perform the following operation any number of times (including zero): choose two packs of votes that currently belong to different candidates and swap them, i.e. change the votes in each of these packs so that they would go to the other candidate.

You are very careful, so you want to perform as few swaps as possible. Find the smallest number of operations you need to perform or determine that it is impossible to make John Jackson win.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and M.
The second line contains N space-separated integers A1,A2,…,AN.
The third line contains M space-separated integers B1,B2,…,BM.
Output
For each test case, print a single line containing one integer ― the smallest number of swaps needed to make John Jackson win, or −1 if it is impossible.

sample test cases
Test Case-1
Input:
2
2 3
2 2
5 5 5
4 3
1 3 2 4
6 7 8

Output:
2
1

Test Case-2
Input:
1
2 4
2 2
1 1 1 3

Output:
-1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int arr1[n];
		int arr2[m];
		int sumA = 0, sumB = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
			sumA += arr1[i]; //sum of all element of 1st array
		}
		for (int i = 0; i < m; i++)
		{
			cin >> arr2[i];
			sumB += arr2[i]; //sum of all element of 2nd array
		}
		int count = 0;
		while (sumA <= sumB)
		{
			int maxB = -1;
			int minA = int(1e9);
			int locA = -1, locB = -1; //loc is location of Array1 and array2
			for (int i = 0; i < n; i++) //this loop is finding the min element and location of min element in first array
			{
				if (arr1[i] < minA) 
				{
					minA = arr1[i];
					locA = i;
				}
			}
			for (int i = 0; i < m; i++) //this loop is finding the max element and location of max element in second array
			{
				if (arr2[i] > maxB)
				{
					maxB = arr2[i];
					locB = i;
				}
			}
			if (minA >= maxB) //if min element of first array is greater than maximum element of second array then we simply return -1 
			{
				count = -1;
				break;
			}
			count++; //we are increamenting the value of count as the number of times we swap and it indicates the number of operation we need to perform 
			swap(arr1[locA], arr2[locB]); //swap the elements if sum of A is less than sum of B
			sumA += maxB - minA;
			sumB += minA - maxB;
		}
		cout << count << endl;
	}
}
