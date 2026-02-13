CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

all: mover

mover: main.o mover.o
	$(CC) $(CFLAGS) -o mover main.o mover.o

main.o: main.c mover.h
	$(CC) $(CFLAGS) -c main.c

mover.o: mover.c mover.h
	$(CC) $(CFLAGS) -c mover.c

clean:
	rm -f *.o mover
