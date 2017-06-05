#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "functions.h"

int main(int argc, const char ** argv)
{

	std::string mystr;

	std::cout << "Please enter a string: ";

	getline(std::cin, mystr);

	std::cout << "string: " <<  mystr << std::endl;

	reverse(mystr);

	std::cout << "reverse string: " << mystr << std::endl;

	reverse(mystr);
	reverseWords(mystr);	

	std::cout << "reverse word string: " <<  mystr << std::endl;
}

