#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "functions.h"

void reverse(std::string& str)
{

	size_t start = 0;
	size_t end = str.length() - 1;
	
	while(start < end) 
	{
		std::swap(str[start], str[end]);

		start++;
		end--;
	}
}
