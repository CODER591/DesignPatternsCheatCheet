
CC=g++

all: main.cpp
	mkdir -p bin/
	mv *.o bin/
	$(CC) bin/*.o -o final.out
	mv final.out bin/

main.cpp:
	$(CC) source/main.cpp -c

#factory_method.cpp:
#	$(CC) source/factory_method.cpp -c

clean:
	rm -rf bin/
