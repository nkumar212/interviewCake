#include <iostream>
#include <vector>
#include <sstream>
#include "tempTracker.h"


int main()
{

	int temp = 0;

	TempTracker tempList = TempTracker();

	tempList.init();

	tempList.printModeList();

	while( temp >= 0 )
	{
		
		std::cout << "Enter a temperature: ";
	
		std::cin >> temp;

		tempList.insert(temp);
	
		std::cout << "Max so far: " << std::to_string(tempList.getMax()) << "\n";
		std::cout << "Min so far: " << std::to_string(tempList.getMin()) << "\n";
		std::cout << "Mean so far: " << std::to_string(tempList.getMean()) << "\n";
		std::cout << "Mode so far: " << std::to_string(tempList.getMode()) << "\n";
		std::cout << "\n\n\n";
		
	
	}


}
