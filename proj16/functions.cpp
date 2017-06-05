#include <vector>
#include <iostream>
#include <stdexcept>
#include "cakeType.h"
#include "functions.h"


long long maxBagValue(const std::vector<CakeType>& cakeTypes, size_t weightCapacity)
{

	std::vector<long long> maxValueAtCap(weightCapacity + 1);


	for(size_t currentCap = 0; currentCap <= weightCapacity; currentCap ++)
	{

		long long currentMaxValue = 0;

		for(const CakeType& cakeType : cakeTypes) {
	
			if(cakeType.weight_ == 0 && cakeType.value_ != 0)
			{
				throw std::range_error("max val is infinity!!");
			}


			if(cakeType.weight_ <= currentCap)
			{

				long long maxValueUsingCake = cakeType.value_ + maxValueAtCap[currentCap - cakeType.weight_];

				currentMaxValue = std::max(maxValueUsingCake, currentMaxValue);
			}
		}
	
		maxValueAtCap[currentCap] = currentMaxValue;
	}

	return maxValueAtCap[weightCapacity];
}


