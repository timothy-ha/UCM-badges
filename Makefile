CC=g++

all: badges.o

clean:
	clear
	-rm -f -r badges.o

badges.o: badges.cpp
	clear
	$(CC) -g badges.cpp -o badges.o
