#include <iostream>
#include <sstream>
#include <stdexcept>
#include "listNode.h"
#include "functions.h"

void deleteNode(ListNode * nodeToDelete)
{

	ListNode * nextNode = nodeToDelete->next_;

	if(nextNode)
	{
		nodeToDelete->intValue_ = nextNode->intValue_;
		nodeToDelete->next_ = nextNode->next_;
		delete nextNode;
	}
	else {
		throw std::invalid_argument("Cant delete the last node with this method!");
	}
}


