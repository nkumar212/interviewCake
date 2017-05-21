MAIN = main.cpp
FUNCT = functions.cpp 
RANGE = rangeOverlap.cpp
RECT = rectangle.cpp

CC = g++
STD = -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)


p1 : 
	$(CC) $(STD) $(LFLAGS) $(MAIN) $(FUNCT) $(RANGE) $(RECT) -o p1

funct:
	$(CC) $(STD) $(LFLAGS) $(MAIN)

rect: 
	$(CC) $(STD) $(LFLAGS) $(RECT)

range:
	$(CC) $(STD) $(LFLAGS) $(RANGE)

clean:
	\rm  p1	
