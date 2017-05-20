#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include "functions.h"


int main()
{


	std::vector<Meeting> mergedList;
	std::vector<Meeting> meetingList;

	meetingList.push_back(Meeting(0,1));
	meetingList.push_back(Meeting(3,5));	
	meetingList.push_back(Meeting(4,8));	
	meetingList.push_back(Meeting(10,12));	
	meetingList.push_back(Meeting(9,10));	

	mergedList = mergeRanges(meetingList);

	std::cout << "[";

	for(size_t i = 0; i < (mergedList.size() -1) ; i++)
	{

		std::cout << "Meeting(" << std::to_string(mergedList[i].getStartTime()) << "," << std::to_string(mergedList[i].getEndTime()) << ") , ";
	}
	
	std::cout << "Meeting(" << std::to_string(mergedList[(mergedList.size()-1)].getStartTime()) << "," << std::to_string(mergedList[(mergedList.size()-1)].getEndTime()) << ")]\n";

}

