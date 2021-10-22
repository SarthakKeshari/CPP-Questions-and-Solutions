//Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications.

//The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).
// TC-O(N^3)
//SC-O(N^2)

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


static int dp[101][101];          //Choosing the size 101*101 because maximum value of n can be 100
int helper(int arr[], int i, int j) {
  if (i >= j) return 0;           //When i will be greater then equal to j then array cant be divided further
  if (dp[i][j] != -1) return dp[i][j];    //If the value is already present in the DP then return it
  int ans = INT_MAX;
  for (int k = i; k < j; k++) {
    int temp = helper(arr, i, k) + helper(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];   //Divide the array in two parts (i to k) and (k+1 to j) and add the multiplication cost of it
    ans = min(ans, temp);       //Store the minimum value at each division
  }
  return dp[i][j] = ans;       //Return the Minimum value at that division;
}
int matrixMultiplication(int N, int arr[]) {
  memset(dp, -1, sizeof(dp));   //Assign the initial value -1 at each position of DP
  return helper(arr, 1, N - 1); //Calling the helper function and passing 1 and N-1 as i and j;
}
int main() {
  cout << "Enter the length of array ";
  int n;
  cin >> n;                                        //Input array size
  cout << "Enter the dimensions of matrices ";
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];                                //Input the dimensions of array
  }
  cout << "The minimum number of multiplication operations needed to be performed is ";
  cout << matrixMultiplication(n, arr);
  return 0;
}
