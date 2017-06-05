#include <vector>
#include <iostream>
#include <sstream>
#include <stack>
#include <stdexcept>
#include "stackQueue.h"

void StackQueue::enqueue (int item){

	inStack_.push(item);
}

int StackQueue::dequeue(void){

	if(outStack_.empty())
	{

		while(!inStack_.empty())
		{
			int newItem = inStack_.top();
			inStack_.pop();
			outStack_.push(newItem);
		}

		if(outStack_.empty())
		{
			throw std::runtime_error("Cant deuque from an emtpy queue!!");
		}
	}
	int result = outStack_.top();
	outStack_.pop();
	return result;
	
}
		
