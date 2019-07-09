CC = g++
CFLAGS = -Wall
DEPS = functional.h
OBJ = Main.o functional.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

Main: $(OBJ)
	g++ $(CFLAGS) -o $@ $^

clean: 
	rm *.o Main
