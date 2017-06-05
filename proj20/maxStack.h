#ifndef MAXSTACK_H
#define MAXSTACK_H
#include <stack>

class MaxStack
{
	private:
		
		std::stack<int> stack_;
		std::stack<int> maxStack_;

	public:

		int push(int item);
		int pop(void);
		int getMax(void) const;
};

#endif
