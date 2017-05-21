#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "tempTracker.h"


TempTracker::TempTracker(void) :
	maxTemp_(0),
	minTemp_(110),
	tempCount_(0),
	tempSum_(0),
	meanTemp_(0),
	modeTemp_(0)
{

}

void TempTracker::init(void)
{
	for(int i = 0; i < 111; i++)
	{
		modeList_[i] = 0;
	}
}

void TempTracker::printModeList(void)
{
	for(int i = 0 ; i < 111; i++)
	{
		std::cout << modeList_[i] << "\n";
	}
}

void TempTracker::insert(int temp) 
{
	int maxCount = 0;	

	tempCount_++;
	tempSum_ += temp;

	meanTemp_ = tempSum_/tempCount_;
		
	maxTemp_ = std::max(temp, maxTemp_);
	minTemp_ = std::min(temp, minTemp_);

	modeList_[temp]++;


	for(int i = 0; i < 111; i++)
	{
		if( modeList_[i] > maxCount)
		{
			modeTemp_ = i;
			maxCount = modeList_[i];
		}
	}	

}

int TempTracker::getMax(void) {

	return maxTemp_;
}

int TempTracker::getMin(void) {

	return minTemp_;
}

int TempTracker::getMean(void) {
	
	return meanTemp_;
}

int TempTracker::getMode(void) {
	
	return modeTemp_;
}



