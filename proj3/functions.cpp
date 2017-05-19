#include <iostream>
#include <vector>

int findProduct(std::vector<int> input)
{

	if(input.size() < 3)
	{
		std::cout << "error not enough input variables";
	}

	int highest = std::max(input[0], input[1]);
	int lowest = std::min(input[0], input[1]);

	int highestTwo = input[0] * input[1];
	int lowestTwo  = input[0] * input[1];

	int highestThree = input[0] * input[1] * input[2];

	for(int i = 2; i < input.size(); i++)
	{

		int current = input[i];

		highestThree = 	std::max( highestThree, std::max( (current * highestTwo), (current * lowestTwo)  ) );

		highestTwo = std::max(highestTwo, current*highest);

		lowestTwo = std::min(lowestTwo, current*lowest);

		highest = std::max(current, highest);
	
		lowest = std::min(lowest, current);

	}

	return highestThree;

}

