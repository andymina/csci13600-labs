CXXFLAGS=-std=c++11

main: main.o
	g++ -o main $(CXXFLAGS) main.o

main.o: lab-images.cpp
	g++ -o main.o $(CXXFLAGS) -c lab-images.cpp

clean:
	rm -f *.o main tests .DS_Store frame.pgm invert.pgm inverthalf.pgm pixelate.pgm scale.pgm box.pgm
