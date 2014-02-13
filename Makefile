add.exe: add_main.o add_func.o
	gcc -s -o add.exe add_main.o add_func.o

add_main.o: add_main.c
	gcc -O2 -c -o add_main.o add_main.c

add_func.o: add_func.c
	gcc -O2 -c -o add_func.o add_func.c

.PHONY: clean
clean:
	rm -rf *.o add.exe
