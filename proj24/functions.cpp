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

ListNode * reverseList(ListNode * head)
{

	ListNode * current = head;
	ListNode * prev = nullptr;
	ListNode * next = nullptr;

	while(current)
	{
		next = current->next_;
		current->next_ = prev;
		prev = current;
		current = next;
	}

	return prev;
}


void printList(ListNode * head)
{

	ListNode * tmp = head;

	if(!tmp)
	{
		throw std::invalid_argument("nothing to print!");
		return;
	}


	while(tmp)
	{
		 
		std::cout << std::to_string(tmp->intValue_);
		
		if(tmp->next_)
		{
			std::cout << "->";
		}

		tmp = tmp->next_;
	}
	
	std::cout << std::endl;
}
