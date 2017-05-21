#ifndef RANGE_H
#define RANGE_H

class RangeOverlap
{
	private:
		int startPoint_;
		int length_;
	
	public:
		RangeOverlap(void);
		RangeOverlap(int startPoint, int length);
		
		int getStartPoint(void) const;
		int getLength(void) const;
		bool operator==(const RangeOverlap& other);
		bool operator!=(const RangeOverlap& other);
};

#endif

