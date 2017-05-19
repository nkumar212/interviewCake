#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

	

}


class Meeting
{
	private:

		unsigned int startTime_;
		unsigned int endTime_;

	publid:
		
		Meeting() :
		
			startTime_(0),
			endTime_(0)
			{}

		Meeting(unsigned int startTime, unsigned int endTime) :

			startTime_(startTime),
			endTime_(endTime)
			{}

		unsigned int getStartTime() const
		{
			return startTime_;
		}

		void setStartTime(unsigned int startTime)
		{
			startTime_ = startTime;
		}

		unsigned int getEndTime() const
		{
			return endTime_;
		}

		void setEndTime(unsigned int endTime)
		{
			endTime_ = endTime;
		}

		bool operator==(const Meeting& other) const
		{
			return
				startTime_ == other.startTime_ && endTime_ == other.endTime_;
			
		}
}	
