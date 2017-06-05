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

bool hasCycle(const ListNode * firstNode)
{
	const ListNode * slow = firstNode;
	const ListNode * fast = firstNode;

	while(fast != nullptr && fast->next_)
	{
		slow = slow->next_;
		fast = fast->next_->next_;

		if(fast == slow)
		{
			return true;
		}
	}

	return false;
}


