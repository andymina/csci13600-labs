CXXFLAGS=-std=c++11

main: main.o timeSlot.o time.o movie.o
	g++ -o main main.o timeSlot.o time.o movie.o

main.o: main.cpp time.h
	g++ -c main.cpp

time.o: time.cpp time.h
	g++ -c time.cpp

movie.o: movie.cpp movie.h
	g++ -c movie.cpp

timeSlot.o: timeSlot.cpp time.h movie.h timeSlot.h
	g++ -c timeSlot.cpp

tests: tests.o time.o
	g++ -o tests tests.o time.o

tests.o: tests.cpp
	g++ -c $(CXXFLAGS) tests.cpp

clean:
	rm -f *.o main .DS_Store
