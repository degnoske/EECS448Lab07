
.PHONY: run main.o Test.o clean 

run: main.o test.o
	g++ -g -Wall -std=c++11 -o run main.o test.o


main.o: main.cpp LinkedList.h Node.h test.h
	g++ -g -Wall -std=c++11 -c main.cpp

test.o: test.cpp test.h LinkedList.h
	g++ -g -std=c++11 -c test.cpp test.h

clean:
		rm *.o *.*~ run || true
