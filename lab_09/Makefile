CXXFLAGS=-std=c++11

main: main.o space3d.o particle.o
	g++ -o main main.o space3d.o particle.o

main.o: main.cpp space3d.h particle.h
	g++ -c main.cpp

space3d.o: space3d.cpp space3d.h
	g++ -c space3d.cpp

particle.o: particle.cpp particle.h
	g++ -c particle.cpp

tests: tests.o space3d.o
	g++ -o tests tests.o space3d.o

tests.o: tests.cpp
	g++ -c $(CXXFLAGS) tests.cpp

poem: poem.o
	g++ -o poem poem.o

poem.o: poem.cpp
	g++ -c poem.cpp

clean:
	rm -f *.o main tests poem .DS_Store
