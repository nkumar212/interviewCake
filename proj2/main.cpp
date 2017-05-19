#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"


int main()
{

	std::vector<int> input = {1, 7, 3, 4};

	std::vector<int> productVector = getProductsOfAllIntsExceptAtIndex(input);

	std::cout << "[";

	for(int i = 0; i < (productVector.size() - 1) ; i++)
	{
	
		std::cout << std::to_string(productVector[i]) << ",";
	}
	std::cout << std::to_string(productVector[productVector.size()-1]) << "]";


}
