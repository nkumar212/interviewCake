#include <iostream>
#include <sstream>
#include "listNode.h"



int main(int argc, const char ** argv)
{

	ListNode * a = new ListNode(1);
	ListNode * b = new ListNode(2);
	ListNode * c = new ListNode(3);

	a->next_ = b;
	b->next_ = c;
	
}
