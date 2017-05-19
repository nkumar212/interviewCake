#include <iostream>
#include <vector>
#include <algorithm>
#include "maxProfit.h"


int main()
{

	std::vector<int> stockPricesYesterday = {10, 7, 5, 8, 11, 9};

	int maxProfit = getMaxProfit(stockPricesYesterday);

	std::cout << std::to_string(maxProfit) + "\n";

}

