CXXFLAGS=-std=c++11

main: main.o
	g++ -o main $(CXXFLAGS) main.o

main.o: main.cpp
	g++ -o main.o $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o main tests .DS_Store
