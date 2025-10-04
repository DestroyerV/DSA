// LC 121

#include <iostream>
using namespace std;

int maxProfit(int stocks[6])
{
    int maxProfit = 0;
    int bestBuy = stocks[0];

    for (int i = 1; i < 6; i++)
    {
        if (stocks[i] > bestBuy)
        {
            maxProfit = max(maxProfit, stocks[i] - bestBuy);
        }
        bestBuy = min(bestBuy, stocks[i]);
    }

    return maxProfit;
}

int main()
{
    int stocks[6] = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(stocks) << endl;

    return 0;
}