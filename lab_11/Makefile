CXXFLAGS=-std=c++11

main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp
	g++ -c $(CXXFLAGS) tests.cpp

clean:
	rm -f *.o main .DS_Store
