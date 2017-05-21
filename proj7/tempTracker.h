#ifndef TEMP_H
#define TEMP_H


class TempTracker
{
	private:
		int maxTemp_;
		int	minTemp_;
		double tempCount_;
		double tempSum_;
		double meanTemp_;
		int modeList_[111];
		int modeTemp_;
	
	public:
		TempTracker(void);
		void init(void);
		void printModeList(void);
		void insert(int temp);
		int getMax(void);
		int getMin(void);
		int getMean(void);
		int getMode(void);
};


#endif
