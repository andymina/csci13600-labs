CXXFLAGS=-std=c++11

main: main.o profile.o network.o
	g++ -o main main.o profile.o network.o

main.o: main.cpp profile.h network.h
	g++ -c main.cpp

profile.o: profile.cpp profile.h
	g++ -c profile.cpp

network.o: network.cpp network.h
	g++ -c network.cpp

tests: tests.o profile.o network.o
	g++ -o tests tests.o profile.o network.o

tests.o: tests.cpp
	g++ -c $(CXXFLAGS) tests.cpp

clean:
	rm -f *.o main tests .DS_Store
