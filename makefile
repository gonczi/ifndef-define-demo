CC=gcc
CFLAGS=-I.
DEPS = hellotype.h hellofunc.h hellosuperfunc.h 
OBJ = main.o hellofunc.o hellosuperfunc.o 

all: demo

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

demo: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o demo core
