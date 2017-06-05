#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include "maxStack.h"

int MaxStack::push(int item)
{
	stack_.push(item);
	if(maxStack_.empty() || item >= maxStack_.top())
	{
		maxStack_.push(item);
	}
	
	return item;
}

int MaxStack::pop(void)
{
	int item = stack_.top();
	stack_.pop();

	if(item == maxStack_.top())
	{
		maxStack_.pop();
	}

	return item;
}

int MaxStack::getMax(void) const
{
	return maxStack_.top();
}
