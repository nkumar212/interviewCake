OBJS = main.cpp
FUNCT = functions.cpp 
CC = g++
STD = -std=c++14
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)


p1 : 
	$(CC) $(STD) $(LFLAGS) $(FUNCT) $(OBJS)

main : 
	$(CC) $(STD) $(LFLAGS) $(OBJS) 

funct : 
	$(CC) $(STD) $(LFLAGS) $(FUNCT) 

clean:
	\rm  a.out	
