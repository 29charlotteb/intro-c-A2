CC = gcc
CFLAGS = -Wall -Werror -Wextra - pendantic

all: distance

distance: main.o distance.o
	$(CC) $(CFLAGS) -o distance main.o distance.o

main.o: main.c distance.h
	$(CC) $(CFLAGS) -c main.c

distance.o: distance.c distance.h
	$(CC) $(CFLAGS) -c distance.c 

clean:
	rm -f *.o powers 