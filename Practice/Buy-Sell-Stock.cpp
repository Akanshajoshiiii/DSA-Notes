/*
Given an array prices[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed.

Note: Stock must be bought before being sold.

Example:

Input: prices[] = {7, 1, 5, 3, 6, 4}
Output: 5
Explanation:
The lowest price of the stock is on the 2nd day, i.e. price = 1. Starting from the 2nd day, the highest price of the stock is witnessed on the 5th day, i.e. price = 6. 
Therefore, maximum possible profit = 6 – 1 = 5. 

*/

#include <iostream>
using namespace std;

int maxProfit(int prices[], int n)
{
	int buy = prices[0], max_profit = 0;
	for (int i = 1; i < n; i++) {

		// Checking for lower buy value
		if (buy > prices[i])
			buy = prices[i];

		// Checking for higher profit
		else if (prices[i] - buy > max_profit)
			max_profit = prices[i] - buy;
	}
	return max_profit;
}

// Driver Code
int main()
{
	int prices[] = { 7, 1, 5, 6, 4 };
	int n = sizeof(prices) / sizeof(prices[0]);
	int max_profit = maxProfit(prices, n);
	cout << max_profit << endl;
	return 0;
}
