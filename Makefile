CC=g++

all: badges

clean:
	clear
	-rm -f -r badges.out

badges: badges.cpp
	clear
	$(CC) -g badges.cpp -o badges.out