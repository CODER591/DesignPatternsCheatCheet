
CC=g++ -Wall

all: main.cpp
	mkdir -p bin/
	mv *.o bin/
	$(CC) bin/*.o -o final.out
	mv final.out bin/

main.cpp: singleton.cpp
	$(CC) source/main.cpp -c

singleton.cpp:
	$(CC) source/singleton.cpp -c

clean:
	rm -rf bin/
