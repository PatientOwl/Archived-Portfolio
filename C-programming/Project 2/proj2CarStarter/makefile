CC=gcc 
CFLAGS=-Wall -pedantic -ansi

all: project2.c mapobjects.o basiclist.o map.o
	$(CC) $(CFLAGS) project2.c mapobjects.o basiclist.o map.o -o project2

mapobjects.o: mapobjects.c
	$(CC) $(CFLAGS) -c mapobjects.c

map.o: map.c
	$(CC) $(CFLAGS) -c map.c

basiclist.o: basiclist.c
	$(CC) $(CFLAGS) -c basiclist.c

clean:
	rm -f *.o
