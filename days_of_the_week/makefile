CC = gcc
CFLAGS = -Wall -Werror -Wextra -pendantic

all: weekday

weekday: main.o weekday.o
	$(CC) $(CFLAGS) -o weekday main.o weekday.o

main.o: main.c weekday.c 
	$(CC) $(CFLAGS) -c main.c 

weekday.o: weekday.c weekday.h 
	$(CC) $(CFLAGS) -c weekday.c 

clean:
	rm -f *.o weekday

	