#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "functions.h"

int main(int argc, const char ** argv)
{

	std::string mystr;

	std::string mystr2 = "Sometimes (when I nest them (my parentheticals) too much (like this (and this))) they get confusing.";

	std::cout << "Please enter a string: ";

	getline(std::cin, mystr);

	std::cout << "string: " <<  mystr << std::endl;

	reverse(mystr);

	std::cout << "reverse string: " << mystr << std::endl;

	reverse(mystr);
	reverseWords(mystr);	

	size_t i = getPerenClose(mystr2, 10); 

	std::cout << "reverse word string: " <<  mystr << std::endl;

	std::cout << std::to_string(i) << std::endl;
}

