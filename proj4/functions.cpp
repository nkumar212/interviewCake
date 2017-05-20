#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include "functions.h"



Meeting::Meeting() :
	startTime_(0),
	endTime_(0)
{
}

Meeting::Meeting(unsigned int startTime, unsigned int endTime) :
	startTime_(startTime),
	endTime_(endTime)
{
}

unsigned int Meeting::getStartTime() const
{
	return startTime_;
}

void Meeting::setStartTime(unsigned int startTime)
{
	startTime_ = startTime;
}

unsigned int Meeting::getEndTime() const
{
	return endTime_;
}

void Meeting::setEndTime(unsigned int endTime)
{
	endTime_ = endTime;
}

bool Meeting::operator==(const Meeting& other) const
{
	
	return startTime_ == other.startTime_ && endTime_ == other.endTime_;
	
}

bool meetingComparison(const Meeting& meeting1, const Meeting& meeting2)
{

	return (meeting1.getStartTime() < meeting2.getStartTime());
}



std::vector<Meeting> mergeRanges(std::vector<Meeting> meetingList){

	std::vector<Meeting> sortedList(meetingList);

	sort(sortedList.begin(), sortedList.end(), meetingComparison);	

	std::vector<Meeting> mergedList;

	mergedList.push_back(sortedList.front());

	for(const Meeting& currentMeeting : sortedList)
	{

		Meeting& lastMerged = mergedList.back();

		if(currentMeeting.getStartTime() <= lastMerged.getEndTime()){
			
			lastMerged.setEndTime(currentMeeting.getEndTime());
		}
		else {
			mergedList.push_back(currentMeeting);
		}
	}

	return mergedList;
}



















