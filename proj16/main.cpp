#include <vector>
#include <stddef.h>
#include <sstream>
#include <iostream>

#include "cakeType.h"
#include "functions.h"

const std::vector<CakeType> cakeTypes {
	CakeType(7, 160),
	CakeType(3, 90),
	CakeType(2, 15),
};

size_t capacity = 20;

int main(int argc, const char ** argv)
{


	long long value = 	maxBagValue(cakeTypes, capacity);

	std::cout << std::to_string(value) << std::endl;
	
}
