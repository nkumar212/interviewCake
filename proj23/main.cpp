#include <iostream>
#include <sstream>
#include "listNode.h"
#include "functions.h"


int main(int argc, const char ** argv)
{

	ListNode * a = new ListNode(1);
	ListNode * b = new ListNode(2);
	ListNode * c = new ListNode(3);
	ListNode * d = new ListNode(4);
	ListNode * e = new ListNode(5);
	ListNode * f = new ListNode(6);
	ListNode * g = new ListNode(7);

	a->next_ = b;
	b->next_ = c;
	
	deleteNode(b);	

	d->next_ = e;
	e->next_ = f;
	f->next_ = g;
	g->next_ = d;

	bool test = hasCycle(d);

	std::cout << "Have a cycle: " << std::to_string(test) << std::endl;

	test = hasCycle(a);

	std::cout << "Have a cycle: " << std::to_string(test) << std::endl;
}
