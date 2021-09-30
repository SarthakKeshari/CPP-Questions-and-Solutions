// Stock Buy Sell to Maximize Profit

/* Q. ou are given an array prices where prices[i] is the price of a given stock on the ith day.
 You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */


#include <iostream>
using namespace std;
 
// Preprocessing helps the code run faster
#define fl(i, a, b) for (int i = a; i < b; i++)
 
// Function that return
int maxProfit(int* prices, int size)
{
    // maxProfit adds up the difference between
    // adjacent elements if they are in increaisng order
    int maxProfit = 0;
    // The loop starts from 1
    // as its comparing with the previous
    fl(i, 1, size) if (prices[i] > prices[i - 1]) maxProfit
        += prices[i] - prices[i - 1];
    return maxProfit;
}
 
// Driver Function
int main()
{
    int prices[] = { 100, 180, 260, 310, 40, 535, 695 };
    int N = sizeof(prices) / sizeof(prices[0]);
    cout << maxProfit(prices, N) << endl;
    return 0;
}
// This code is contributed by Rajat Jain

