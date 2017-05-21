#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "functions.h"
#include "rectangle.h"

Rectangle::Rectangle() :
	leftX_(0),
	bottomY_(0),
	width_(0),
	height_(0)
{
}

Rectangle::Rectangle(int leftX, int bottomY, int width, int height) :
	leftX_(leftX),
	bottomY_(bottomY),
	width_(width),
	height_(height)
{
}

int Rectangle::getLeftX(void) const 
{
	return leftX_;
}

int Rectangle::getBottomY(void) const
{
	return bottomY_;
}

int Rectangle::getWidth(void) const
{
	return width_;
}

int Rectangle::getHeight(void) const
{
	return height_;
}




bool Rectangle::operator==(const Rectangle& other) const
{
	return
		leftX_ == other.leftX_ && bottomY_ == other.bottomY_ && width_ == other.width_ && height_ == other.height_;
}

bool Rectangle::operator!=(const Rectangle& other) const
{
	return !(*this == other);
}
