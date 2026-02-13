CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

all: powers

powers: main.o powers.o
	$(CC) $(CFLAGS) -o powers main.o powers.o

main.o: main.c powers.h
	$(CC) $(CFLAGS) -c main.c

powers.o: powers.c powers.h
	$(CC) $(CFLAGS) -c powers.c

clean:
	rm -f *.o powers