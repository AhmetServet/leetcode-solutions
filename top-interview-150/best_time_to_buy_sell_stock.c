#include <stdio.h>

/*
    Brute force solution
    Time complexity: O(n^2)
*/

int maxProfit(int* prices, int pricesSize) {
    int maxProfit = 0;
    for (int i = 0; i < pricesSize - 1; i++) {
        for (int j = i + 1; j < pricesSize; j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int pricesSize = 6;
    int maxProfitValue = maxProfit(prices, pricesSize);
    printf("%d\n", maxProfitValue);
    return 0;
}