#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>


void reverse(std::string& str);
void reverse(std::string& str, size_t start, size_t end);

void reverseWords(std::string& message);

size_t getPerenClose( const std::string& message, size_t openingIndex);


#endif
