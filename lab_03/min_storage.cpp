#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

double min_storage();

double min_storage(){
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}

	std::string junk;
	getline(fin, junk);

	std::string date;
	double minEastSt;

	fin >> date >> minEastSt;
	fin.ignore(INT_MAX, '\n');

	double eastSt;

	while (fin >> date >> eastSt){
		fin.ignore(INT_MAX, '\n');

		if (eastSt < minEastSt){
			minEastSt = eastSt;
		}
	}

	fin.close();
	return minEastSt;
}
