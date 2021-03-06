#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

std::string reverse(std::string date1, std::string date2);
int daysBetween(std::string date1, std::string date2);

std::string reverse(std::string date1, std::string date2){
	const int ARRAY_SIZE = daysBetween(date1, date2);
	std::string dates[ARRAY_SIZE];
	double elevations[ARRAY_SIZE];

	std::string date;
	double eastSt, westSt;
	double eastEl, westEl;
	int counter = 0;
	std::string output;

	std::ifstream fin("Current_Reservoir_Levels.tsv");

	if (fin.fail()){
		std::cerr << "File could not be opened for reading." << std::endl;
		exit(1);
	}

	std::string junk;
	getline(fin, junk);

	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
		fin.ignore(INT_MAX, '\n');

		if (date == date1){
			while (date != date2){
				dates[ARRAY_SIZE - 1 - counter] = date;
				elevations[ARRAY_SIZE - 1 - counter] = westEl;
				counter++;
				fin >> date >> eastSt >> eastEl >> westSt >> westEl;
				fin.ignore(INT_MAX, '\n');
			}
		}

		if (date == date2){
			dates[0] = date;
			elevations[0] = westEl;
		}
	}

	for (int i = 0; i < ARRAY_SIZE; i++){
		std::string str = std::to_string(elevations[i]);
		str.erase ( str.find_last_not_of('0') + 1, std::string::npos );
		str.erase ( str.find_last_not_of('.') + 1, std::string::npos );
	 	output += dates[i] + " " + str + " ft \n";
	}

	return output;
}

int daysBetween(std::string date1, std::string date2){
	int month1 = stoi(date1.substr(0, 2)); // 9
	int day1 = stoi(date1.substr(3, 2)); // 13

	int month2 = stoi(date2.substr(0, 2)); // 9
	int day2 = stoi(date2.substr(3, 2)); // 17

	if (month1 == month2){
		return day2 - day1 + 1;
	} else {
		std::string currentDate = date1;
		int dayCounter = 1;

		while (currentDate != date2){
			dayCounter++;

			switch (month1){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if (day1 == 31){
						day1 = 1;
						month1 += 1;
					} else {
						day1 += 1;
					}

					break;

				case 4:
				case 6:
				case 9:
				case 11:
					if (day1 == 30){
						day1 = 1;
						month1 += 1;
					} else {
						day1 += 1;
					}

					break;

				case 2:
					if (day1 == 29){
						day1 = 1;
						month1 += 1;
					} else {
						day1 += 1;
					}

					break;
			}

			std::string s_month1, s_day1;

			if (month1 < 10){
				s_month1 = "0" + std::to_string(month1);
			} else {
				s_month1 = std::to_string(month1);
			}

			if (day1 < 10){
				s_day1 = "0" + std::to_string(day1);
			} else {
				s_day1 = std::to_string(day1);
			}

			currentDate = s_month1 + "/" + s_day1 + "/2016";
		}

		return dayCounter;
	}
}
