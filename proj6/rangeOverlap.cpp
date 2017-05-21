#define <iostream>
#define <vector>
#define <algorithm>
#define "rangeOverlap.h"


RangeOverlap::RangeOverlap(void) :

	startPoint_(0);
	length_(0);
{
}

RangeOverlap::RangeOverlap(int startPoint, int length) :
	
	startPoint_(startPoint);
	length_(length);
	
{
}

int RangeOverlap::getStartPoint(void) const
{
	return startPoint_;
}

int RangeOverlap::getLength(void) cost
{
	return length_;
}

bool operator==(const RangeOverlap& other) const
{
	return startPoint_ == other.startPoint_ && length_ == other.length__;
}

bool operator!=(const RangeOverlap& other) const
{
	return !(*this == other);
}


