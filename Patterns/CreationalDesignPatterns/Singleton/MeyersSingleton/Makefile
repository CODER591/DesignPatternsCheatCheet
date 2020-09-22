
CC=g++

all: main.cpp
	mkdir -p bin/
	mv *.o bin/
	$(CC) bin/*.o  -pthread -o final.out
	mv final.out bin/

main.cpp:
	$(CC) source/main.cpp -c

clean:
	rm -rf bin/
