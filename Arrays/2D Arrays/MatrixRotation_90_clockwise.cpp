
#include <bits/stdc++.h>
using namespace std;

#define N 4

// Function to rotate the matrix 90 degree clockwise
void rotate90Clockwise(int a[N][N])
{

	// Traverse each cycle
	for (int i = 0; i < N / 2; i++) {
		for (int j = i; j < N - i - 1; j++) {

			// Swap elements of each cycle
			// in clockwise direction
			int temp = a[i][j];
			a[i][j] = a[N - 1 - j][i];
			a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
			a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
			a[j][N - 1 - i] = temp;
		}
	}
}


void printMatrix(int arr[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}


int main()
{
	int arr[N][N] = { { 2, 10, 5, 3},
					{ 7, 8, 9, 11},
					{ 14, 15, 16, 13 },
					{ 1, 4, 6, 10 } };
                    cout<<"Matrix Before Rotation"<<endl;
                    printMatrix(arr);
                    cout<<endl;
                     cout<<"Matrix After Rotation"<<endl;
	rotate90Clockwise(arr);
	printMatrix(arr);
	return 0;
}
