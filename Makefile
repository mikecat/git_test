CC=gcc
CFLAGS=-O2
LDFLAGS=-s -static
RM=rm -f

add.exe: add_main.o add_func.o
	$(CC) $(LDFLAGS) -o add.exe add_main.o add_func.o

add_main.o: add_main.c
	$(CC) $(CFLAGS) -c -o add_main.o add_main.c

add_func.o: add_func.c
	$(CC) $(CFLAGS) -c -o add_func.o add_func.c

.PHONY: clean
clean:
	$(RM) *.o add.exe
