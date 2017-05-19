#include <vector>

std::vector<int> getProductsOfAllIntsExceptAtIndex(std::vector<int> input)
{


	std::vector<int> productVector(input.size());

	int productSoFar = 1;
	for(int i = 0; i < input.size(); i++)
	{
		productVector[i] = productSoFar;

		productSoFar *= input[i];
	}

	productSoFar = 1;
	for(int i = (input.size() - 1); i >= 0; i--)
	{
		productVector[i] *= productSoFar;
		
		productSoFar *= input[i];
	}

	return productVector;

}
