all: hello world

hello: hello.c
	gcc hello.c -o hello

world.o: world.c
	gcc -c world.c

my_input.o: my_input.c
	gcc -c my_input.c

world: world.o my_input.o
	gcc world.o my_input.o -o world

clean:
	rm -f hello world *.o

tar:
	tar -cvf hello.tar Makefile *.c *.h
