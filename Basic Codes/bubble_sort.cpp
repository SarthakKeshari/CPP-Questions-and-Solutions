/**
 * @file sorting_heapsort.cpp
 * @author BodaleDenis (bodaledenis.work@gmail.com)
 * @brief Quicksort algorithm (recursive)
 * @date 2021-09-29
 * @Question : Take 10 numbers as input from the user and sort it
 */

#include <iostream>
#include <vector>
#include <algorithm>


void bubbleSort(int arr[], int arrSize)
{
    /**
     * @brief bubbleSort method which implement bubble sort algorithm, inefficient for large sets of data structures
     * since performance is around O(N^2), but simple to keep in mind and OK for small data usage
     * @Parameters: arr[] is 1D array(also known as Vector) which keep multiple integers in it
     * @Parameters: arrSize is the size of the array, hence we need this information to know until when to iterate through array
     * @Explanations: Iterate with two for statements in order to compare every element with the neighbour until every element is
     * in desired place(sorted in this case). 
     * std::swap is used in order to change places of elements, example swap(a, b) => a have b value and b have a value
     */
    for(int iter1 = 0; iter1 < arrSize; iter1++)
    {
        for(int iter2 = 0; iter2 < arrSize-iter1-1; iter2++)
        {
            if(arr[iter2] > arr[iter2+1])
            {
                std::swap(arr[iter2], arr[iter2+1]);
            }

        }
    }
}


// Driver code
int main()
{
    int arr[15], n=10;
    // Read elements (10 in total)
    std::cout << "Read arr elements (10 in total)" << "\n";
    for(int iter = 0; iter < 10; iter++)
    {
        std::cout << "Insert element: ";
        std::cin >> arr[iter];
        std::cout << "\n";
    }
    // Call bubbleSort method
    bubbleSort(arr, n);
    // Print out the results
    std::cout << "Sorted arr [ ";
    for(int iter = 0; iter < n; iter++)
    {
        std::cout << arr[iter] << " ";
    }
    std::cout << " ]";
}
