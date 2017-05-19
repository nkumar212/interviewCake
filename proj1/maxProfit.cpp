#include<vector>
#include<iostream>

int getMaxProfit(std::vector<int> stockPricesYesterday)
{
	if(stockPricesYesterday.size() < 2)
	{
		std::cout << "Error, less than 2 stocks";
		return -1;
	}

	int minSoFar = stockPricesYesterday[0];
	int potentialProfit = stockPricesYesterday[1] - minSoFar;
	int maxProfit = potentialProfit;

	for(int i = 2; i < stockPricesYesterday.size(); i++)
	{
		potentialProfit = stockPricesYesterday[i] - minSoFar;
		minSoFar = std::min(minSoFar, stockPricesYesterday[i]);
		maxProfit = std::max(maxProfit, potentialProfit);
	}
	
	return maxProfit;
}
