CXXFLAGS=-std=c++11

main: main.o
	g++ -o main $(CXXFLAGS) main.o

main.o: main.cpp east_storage.o max_storage.o min_storage.o compare.o reverse.o
	g++ -o main.o $(CXXFLAGS) -c main.cpp

tests: tests.o
	g++ -o tests $(CXXFLAGS) tests.o

tests.o: tests.cpp
	g++ -o tests.o $(CXXFLAGS) -c tests.cpp

east_storage.o: east_storage.cpp
	g++ -o east_storage.o  $(CXXFLAGS) -c east_storage.cpp

max_storage.o: max_storage.cpp
	g++ -o max_storage.o  $(CXXFLAGS) -c max_storage.cpp

min_storage.o: min_storage.cpp
	g++ -o min_storage.o  $(CXXFLAGS) -c min_storage.cpp

compare.o: compare.cpp
	g++ -o compare.o $(CXXFLAGS) -c compare.cpp

reverse.o: reverse.cpp
	g++ -o reverse.o $(CXXFLAGS) -c reverse.cpp

daysBetween.o: daysBetween.cpp
	g++ -o daysBetween.o $(CXXFLAGS) -c daysBetween.cpp

clean:
	@rm -f *.o
	@rm -f main
	@rm -f tests
	@rm -f .DS_Store
