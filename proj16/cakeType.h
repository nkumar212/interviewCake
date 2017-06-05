#ifndef CAKE_H
#define CAKE_H
#include <stddef.h>

class CakeType
{
	public:

		size_t weight_;
		long long value_;

		CakeType(size_t weight, long long value) :
			weight_(weight),
			value_(value)
		{
		}
};

#endif


