#ifndef FUNCTIONS_H
#define FUNCTIONS_H


class Meeting
{
	private:
		unsigned int startTime_;
		unsigned int endTime_;

	public:

		Meeting();
		Meeting(unsigned int startTime, unsigned int endTime);
		unsigned int getStartTime(void) const;
		void setStartTime(unsigned int startTime);
		unsigned int getEndTime(void) const;
		void setEndTime(unsigned int endTime);
		bool operator==(const Meeting& other) const;
};

bool meetingComparison(const Meeting& meeting1, const Meeting& meeting2);
std::vector<Meeting> mergeRanges(const std::vector<Meeting> meetingList);

#endif
