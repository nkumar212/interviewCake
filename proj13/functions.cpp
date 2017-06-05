#include <vector>
#include <sstream>
#include <iostream>
#include "functions.h"



size_t findRotationPoint(const std::vector<std::string>& words)
{
	
	size_t floor = 0;
	size_t ceiling = words.size() - 1;


	while(floor < ceiling)
	{
	
		size_t guess = floor + ((ceiling-floor)/2);

		if(words[guess] >= words[0])
		{
			floor = guess;
		}
		else {
			ceiling = guess;
		}
	

		if(floor + 1 == ceiling)
		{
			break;
		}
	}
	
	return ceiling;
}


