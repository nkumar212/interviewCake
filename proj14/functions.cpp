#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_set>
#include "functions.h"


bool canTwoMoviesFill(const std::vector<int>& movieLengths, int flightLength)
{

	std::unordered_set<int> movieLengthSeen;

	for(int firstMovieLength : movieLengths)
	{

		int matchingLength = flightLength - firstMovieLength;
		if(movieLengthSeen.find(matchingLength) != movieLengthSeen.end())
		{
			return true;
		}

		movieLengthSeen.insert(firstMovieLength);
	}

	return false;
};


