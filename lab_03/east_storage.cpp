#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

double east_storage(std::string s);

double east_storage(std::string s){
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}

	std::string junk;
	getline(fin, junk);

	double result;

	std::string date;
	double eastSt;

	while (fin >> date >> eastSt){
		fin.ignore(INT_MAX, '\n');

		if (date == s){
			result = eastSt;
		}
	}

	fin.close();
	return result;
}
