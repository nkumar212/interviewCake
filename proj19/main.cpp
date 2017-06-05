#include <iostream>
#include <stdlib.h>
#include "stackQueue.h"

int main( int argc, const char ** argv)
{

	StackQueue newQueue;

	for(int i = 0; i < 100; i++)
	{	

		int random = rand();

		std::cout << "insterting val into queue: " << std::to_string(random) << std::endl;
		newQueue.enqueue(random);
	}

	
	for(int j = 0; j < 10; j++)
	{
		int val = newQueue.dequeue();
		std::cout << "top queue item is: " << std::to_string(val) << std::endl;
	}
	
	for(int i = 0; i < 10; i++)
	{	

		int random = rand();

		std::cout << "insterting val into queue: " << std::to_string(random) << std::endl;
		newQueue.enqueue(random);
	}
	
	for(int j = 0; j < 90; j++)
	{
		int val = newQueue.dequeue();
		std::cout << "top queue item is: " << std::to_string(val) << std::endl;
	}
}
