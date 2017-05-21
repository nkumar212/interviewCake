#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"

int main()
{

	Rectangle r1 = Rectangle(2, 2, 6, 7);
	Rectangle r2 = Rectangle(4, 6, 6, 9);

	Rectangle sol = findIntersection(r2, r1);

		
	std::cout << "Rectangle(" << std::to_string(sol.getLeftX()) << "," << std::to_string(sol.getBottomY()) << "," << std::to_string(sol.getWidth()) << "," << std::to_string(sol.getHeight()) << ")\n";



}
