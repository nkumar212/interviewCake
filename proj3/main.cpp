#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"

int main()
{

	std::vector<int> vectorOfInts = {-10, -10, 1, 3, 2};

	int product = findProduct(vectorOfInts);

	std::cout << "product= " << std::to_string(product);

}
