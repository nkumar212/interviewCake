#include <iostream>
#include <sstream>
#include <vector>
#include "functions.h"


int main(int argc, const char ** argv)
{

	int n;
	int fib;

	std::cout << "Enter number to calc fib: ";
	std::cin >> n;

	fib = iFib(n);

	
	std::cout << "fib answer: " << std::to_string(fib) << std::endl;
}
	
