#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "rectangle.h"
#include "rangeOverlap.h"

RangeOverlap findRangeOverlap(int point1, int length1, int point2, int length2);
Rectangle findIntersection(const Rectangle& rect1, const Rectangle& rect2);

#endif
