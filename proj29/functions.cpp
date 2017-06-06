#include <utility>
#include <stack>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
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

bool isValid(const std::string& message){

	std::unordered_map<char, char> openersPair {
	
		std::make_pair('(', ')'),
		std::make_pair('[', ']'),
		std::make_pair('{', '}')
	};

	std::unordered_set<char> closers {
		')', ']', '}'
	};

	std::stack<char> stack;

	for(char c : message) {

		if(openersPair.find(c) != openersPair.end())
		{
			stack.push(c);
		}
		else if( closers.find(c) != closers.end()) 
		{
			if(stack.empty())
			{
				return false;
			}	
			else {

				char lastUnclosedOpener = stack.top();
				stack.pop();

				if(openersPair[lastUnclosedOpener] != c)
				{
					return false;
				}
			}
		}
	}
		
	return stack.empty();
}













