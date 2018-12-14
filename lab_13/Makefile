CXXFLAGS=-std=c++11

main: main.o
	g++ -o main main.o

main.o: main.cpp vector.hpp
	g++ -c main.cpp

tests: tests.o
	g++ -o tests tests.o

tests.o: tests.cpp vector.hpp
	g++ -c $(CXXFLAGS) tests.cpp

clean:
	rm -f *.o main tests .DS_Store
