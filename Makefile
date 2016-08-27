##Makefile##
CC = gcc
CFLAGS = -Wall
OBJ = main.o

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

main: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o

mrproper: clean
	rm -rf main

run:
	./main
