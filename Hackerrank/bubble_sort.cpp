/*
Input Format

The first line contains an integer, n , the size of the array a.
The second line contains n space-separated integers a[i].

Output Format

Sample Input 0

STDIN   Function
-----   --------
3       a[] size n = 3
1 2 3   a = [1, 2, 3]

Sample Output 0

Array is sorted in 0 swaps.
First Element: 1
Last Element: 3


Link : https://www.hackerrank.com/challenges/ctci-bubble-sort/problem
*/


#include <iostream>
#include <cstdio>

using namespace std;

int arr[100];

int main() {
    int n, swaps = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                swaps++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n", swaps);
    printf("First Element: %d\n", arr[0]);
    printf("Last Element: %d\n", arr[n-1]);
    return 0;
}
