# include <iostream>
using namespace std;
void swap(int *,int *);
int partition(int ,int ,int);
void quickSort(int arr[], int start, int end);
void merge(int arr1[],int arr2[],int arr3[]);
double MedianofArrays(int arr3[],int,int);
int m,n,i;
double median;
int main()
{
    cin>>m;
	cin>>n;
    int array1[m],array2[n],array3[m+n];
    for (i=0;i<m;i++)
	cin>>array1[i];
    for (i=0;i<n;i++)
    cin>>array2[i];
	merge(array1,array2,array3);
	quickSort(array3,0,m+n);
	median=MedianofArrays(array3,m,n);
	cout<<median;
    return 0;
}

void swap(int *a, int *b)
{
	char tmp = *a;
	*a = *b;
	*b =tmp;
}

int partition(int arr[], int start, int end)
{
	int x = arr[end];
	int i = start - 1;
	for(int j = start; j <= end-1; j++)
	{
		if(arr[j] <= x)
		{
			i = i + 1;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[end]);
	return i+1;
}

void quickSort(int arr[], int start, int end)
{
	if(start<end)
	{
		int q = partition(arr, start, end);
		quickSort(arr, start, q-1);
		quickSort(arr, q+1, end);
	}
}
void merge(int arr1[],int arr2[],int arr3[])
{
	for(i=0;i<m;i++)
    arr3[i]=arr1[i];
    for(i=m;i<(m+n);i++)
    arr3[i]=arr2[i-m];

}
double MedianofArrays(int arr3[],int m,int n)
{
	int i,j;
	if ((m+n)%2==0)
	{
		i=(m+n)/2;
		j=(m+n+2)/2;
		median=(double)(arr3[i-1]+arr3[j-1])/2;
	}
	else
	{
		i=j=(m+n+1)/2;
		median=(double)(arr3[i-1]+arr3[j-1])/2;
	}
	return median;

}