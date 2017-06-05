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

void reverse(std::string& str, size_t start, size_t end)
{
	while(start < end)
	{
		std::swap(str[start], str[end]);
	
		start++;
		end--;
	}
}

void reverseWords(std::string& message)
{
	reverse(message);

	size_t currentWordStart = 0;

	for(size_t i = 0; i <= message.length() ; i++)
	{
		if(i == message.length() || message[i] == ' ')
		{
			reverse(message, currentWordStart, i - 1);
			currentWordStart = i + 1;
		}
	}
}


size_t getPerenClose( const std::string& message, size_t openingIndex)
{
	size_t numPeren = 0;

	for(size_t i = openingIndex + 1; i < message.length(); i++)
	{
		char c = message[i];

		if(c == '(') 
		{
			numPeren++;
		}

		if(c == ')')
		{
			if(numPeren == 0)
			{
				return i;
			}
			else {
				numPeren--;
			}
		}
	}
	
	throw std::invalid_argument("No closing perentheses");
}
