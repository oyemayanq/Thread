CC = g++
CFLAGS = -c -Wall

all: main

main: thread.o main.o
	$(CC) thread.o main.o -o main

thread.o: include/thread.h src/thread.cpp
	$(CC) $(CFLAGS) src/thread.cpp

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp

clean:
	del *.o main.exe
