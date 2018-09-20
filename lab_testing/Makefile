CXXFLAGS=-std=c++11

tests: tests.o pig.o
	g++ -o tests tests.o pig.o

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

pig.o: pig.cpp pig.hpp
	g++ $(CXXFLAGS) -c pig.cpp

clean:
	rm -f main.o pig.o tests.o
