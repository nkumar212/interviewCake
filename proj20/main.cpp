#include <iostream>
#include "maxStack.h"

int main(int argc, const char ** argv)
{

	MaxStack mStack;

	for(int i = 0; i < 1000; i++)
	{

		int val = rand();
		
		std::cout << "inserting: " << std::to_string(val) << std::endl;	

		int stat = mStack.push(val);



	}

	int max = mStack.getMax();

	std::cout << "max in stack: " << std::to_string(max) << std::endl;

}
