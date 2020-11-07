
CC=g++ -Wall

.PHONY:factory_holder

all: main

main: factory_holder main.cpp
	mkdir -p bin/
	mv *.o bin/
	$(CC) bin/factory_holder_singleton.o bin/main.o -o final.out
	mv final.out bin/

main.cpp:
	$(CC) source/main.cpp -c

factory_holder:
	$(CC) source/factory_holder/factory_holder_singleton.cpp -c

clean:
	rm -rf bin/
