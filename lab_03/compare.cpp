#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

std::string compare(std::string date1, std::string date2);

std::string compare(std::string date1, std::string date2){
	std::ifstream fin("Current_Reservoir_Levels.tsv");

	if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}

	std::string junk;
	getline(fin, junk);

	std::string date;
	double eastSt, westSt;
	double eastEl, westEl;
	std::string output;

	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
		fin.ignore(INT_MAX, '\n');

		if (date == date1){
			while (date != date2){
				if (eastEl > westEl){
					output += date + " East\n";
				} else if (eastEl < westEl){
					output += date + " West\n";
				} else {
					output += date + " Equal\n";
				}

				fin >> date >> eastSt >> eastEl >> westSt >> westEl;
				fin.ignore(INT_MAX, '\n');
			}
		}

		if (date == date2){
			if (eastEl > westEl){
				output += date + " East";
			} else if (eastEl < westEl){
				output += date + " West";
			} else {
				output += date + " Equal";
			}
		}
	}

	fin.close();
	return output;
}
