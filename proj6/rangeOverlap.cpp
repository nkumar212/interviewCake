#include <iostream>
#include <vector>
#include <algorithm>
#include "rangeOverlap.h"


RangeOverlap::RangeOverlap(void) :

	startPoint_(0),
	length_(0)
{
}

RangeOverlap::RangeOverlap(int startPoint, int length) :
	
	startPoint_(startPoint),
	length_(length)
	
{
}

int RangeOverlap::getStartPoint(void) const
{
	return startPoint_;
}

int RangeOverlap::getLength(void) const
{
	return length_;
}

bool RangeOverlap::operator==(const RangeOverlap& other) 
{
	return startPoint_ == other.startPoint_ && length_ == other.length_;
}

bool RangeOverlap::operator!=(const RangeOverlap& other)
{
	return !(*this == other);
}


