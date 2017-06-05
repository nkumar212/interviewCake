#ifndef STACK_H
#define STACK_H
#include <stack>

class StackQueue
{
	private:
		std::stack<int> inStack_;
		std::stack<int> outStack_;

	public:
		void enqueue(int item);
		int dequeue(void);
};

#endif
