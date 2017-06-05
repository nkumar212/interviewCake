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

ListNode * kthToLast(size_t k, ListNode * head)
{
	if( k < 1 )
	{
		throw std::invalid_argument("cannot find less than the head of list");
	}

	size_t listLength = 1;
	ListNode * current = head;

	while(current)
	{
		current = current->next_;
		listLength++;
	}

	if( k > listLength )
	{
		throw std::invalid_argument("cannot find element past list size");
	}

	size_t distanceToTravel = listLength - k;
	current = head;

	for(size_t i = 0; i < distanceToTravel-1; i++)
	{
		current = current->next_;
	}

	return current;
}
