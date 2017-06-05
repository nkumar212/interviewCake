OBJS = main.cpp 
FUNCT = functions.cpp
CAKE = cakeType.h
CC = g++
STD = -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)


p1 : 
	$(CC) $(STD) $(LFLAGS) $(OBJS) $(FUNCT) $(CAKE)  

cake : 
	$(CC) $(STD) $(LFLAGS) $(CAKE)

funct : 
	$(CC) $(STD) $(LFLAGS) $(FUNCT)

clean:
	\rm  p1	
