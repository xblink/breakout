CC = g++
DEBUG = -g -O0 -pedantic-errors
CFLAGS = -Wall -std=c++14 $(DEBUG) -c
LFLAGS = -Wall $(DEBUG) -lmenu -lncurses -o

default: breakout.o game.o
	$(CC) $(LFLAGS) breakout *.o

breakout.o:
	$(CC) $(CFLAGS) breakout.cpp

game.o:
	$(CC) $(CFLAGS) game.cpp

clean:
	rm -f *.o
	rm -f breakout
