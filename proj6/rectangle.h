#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		int leftX_;
		int bottomY_;

		int width_;
		int height_;

	public:
		
		Rectangle(void);
		Rectangle(int leftX, int bottomY, int width, int height);
		int getLeftX(void) const;
		int getBottomY(void) const;
		int getWidth(void) const;
		int getHeight(void) const;
		bool operator==(const Rectangle& other) const;
		bool operator!=(const Rectangle& other) const;
};

#endif
