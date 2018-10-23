CXXFLAGS=-std=c++11

main: main.o
	g++ -o main $(CXXFLAGS) main.o

main.o: main.cpp
	g++ -o main.o $(CXXFLAGS) -c main.cpp

tests: tests.o
	g++ -o tests $(CXXFLAGS) tests.o

tests.o: tests.cpp
	g++ -o tests.o $(CXXFLAGS) -c tests.cpp

clean:
	rm -f *.o main tests .DS_Store
