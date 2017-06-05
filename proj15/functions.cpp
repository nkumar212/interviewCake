#include <algorithm>
#include <vector>
#include <sstream>
#include <iostream>
#include "functions.h"


int rFib(int n) {

	if( n == 0 || n == 1 ) 
	{
		return 1;
	}

	return rFib(n-1) + rFib(n-2);

}


int iFib(int n) {
	
	if( n < 0)
	{
		throw "invalid argument, cannot compute fib of negative number";
	}

	if( n == 0 || n == 1 )
	{
		return n;
	}

	int prevPrev = 0;
	int prev = 1;
	int current = 0;

	for(int i = 1; i < n; i++)
	{
		current = prev + prevPrev;
		prevPrev = prev;
		prev = current;
	}

	return current;
}


