#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include "functions.h"

std::vector<std::string> words = {
    "ptolemaic",
    "retrograde",
    "supplant",
    "undulate",
    "xenoepist",
    "asymptote", // <-- rotates here!
    "babka",
    "banoffee",
    "engender",
    "karpatka",
    "othellolagkage"
};



int main(int argc, const char ** argv) {

	size_t rPoint =	findRotationPoint(words);

	std::cout << "Rotation Point found at index: " << std::to_string(rPoint) << std::endl;
}	
