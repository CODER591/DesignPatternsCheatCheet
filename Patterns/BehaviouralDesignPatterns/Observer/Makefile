CC=g++ -Wall -std=c++14

.PHONY:all
.PHONY:run

all:
	mkdir -p bin/
	$(CC) source/*.cpp -c
	mv *.o bin/
	$(CC) bin/*.o -o bin/a.out

run: all
	./bin/a.out

clean:
	rm -rf bin/
