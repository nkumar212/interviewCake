#include <iostream>
#include <vector>
#include "functions.h"


const std::vector<int>& movieLengths = {120, 111, 90, 95, 100, 75};


int main(int argc, const char ** argv) {


	if( canTwoMoviesFill(movieLengths, 185) )
	{
		std::cout << "two movies found" << std::endl;
	}
	else {
		std::cout << "no combo exists" << std::endl;
	}

}
