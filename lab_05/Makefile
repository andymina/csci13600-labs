CXXFLAGS=-std=c++11

main: main.o divisible.o prime.o next-prime.o count-primes.o twin-prime.o next-twin-prime.o largest-twin-prime.o
	g++ -o main $(CXXFLAGS) main.o prime.o divisible.o next-prime.o count-primes.o twin-prime.o next-twin-prime.o largest-twin-prime.o

main.o: main.cpp
	g++ -o main.o $(CXXFLAGS) main.cpp

divisible.o: divisible.cpp divisible.h
	g++ -o divisible.o $(CXXFLAGS) -c divisible.cpp

prime.o: prime.cpp prime.h
	g++ -o prime.o $(CXXFLAGS) -c prime.cpp

next-prime.o: next-prime.cpp next-prime.h
	g++ -o next-prime.o $(CXXFLAGS) -c next-prime.cpp

count-primes.o: count-primes.cpp count-primes.h
	g++ -o count-primes.o $(CXXFLAGS) -c count-primes.cpp

twin-prime.o: twin-prime.cpp twin-prime.h
	g++ -o twin-prime.o $(CXXFLAGS) -c twin-prime.cpp

next-twin-prime.o: next-twin-prime.cpp next-twin-prime.h
	g++ -o next-twin-prime.o $(CXXFLAGS) -c next-twin-prime.cpp

largest-twin-prime.o: largest-twin-prime.cpp largest-twin-prime.h
	g++ -o largest-twin-prime.o $(CXXFLAGS) -c largest-twin-prime.cpp

tests: tests.o divisible.o prime.o next-prime.o count-primes.o twin-prime.o next-twin-prime.o largest-twin-prime.o
	g++ -o tests $(CXXFLAGS) tests.o divisible.o prime.o next-prime.o count-primes.o twin-prime.o next-twin-prime.o largest-twin-prime.o

tests.o: tests.cpp
	g++ -o tests.o $(CXXFLAGS) -c tests.cpp

clean:
	rm -f *.o main tests .DS_Store
