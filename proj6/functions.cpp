#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "functions.h"
#include "rectangle.h"
#include "rangeOverlap.h"

RangeOverlap findRangeOverlap(int point1, int length1, int point2, int length2)
{

	int highestStart = std::max(point1, point2);
	int lowestEnd = std::min( (point1 + length1), (point2 + length2) );
	int overlap;

	if( lowestEnd <= highestStart )
	{
		return RangeOverlap();
	}
		
	overlap = lowestEnd - highestStart;

	return RangeOverlap(highestStart, overlap);
}

Rectangle findIntersection(const Rectangle& rect1, const Rectangle& rect2)
{

	RangeOverlap xOverlap = findRangeOverlap(rect1.getLeftX(), rect1.getWidth(), rect2.getLeftX(), rect2.getWidth());
	RangeOverlap yOverlap = findRangeOverlap(rect1.getBottomY(), rect1.getHeight(), rect2.getBottomY(), rect2.getHeight());

	if( xOverlap != RangeOverlap() )
	{
		if(yOverlap != RangeOverlap() )
		{
			return Rectangle(xOverlap.getStartPoint(), xOverlap.getLength(), yOverlap.getStartPoint(), yOverlap.getLength());
		}
	}

	return Rectangle();
	
}






















