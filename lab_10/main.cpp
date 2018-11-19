#include <iostream>
#include "timeSlot.h"

using std::cout;
using std::endl;

int main(){
	Movie movie1 = {"Back to the Future", COMEDY, 91};
	Movie movie2 = {"Black Panther", ACTION, 134};

	TimeSlot morning = {movie1, {9, 15}};
	TimeSlot daytime = {movie2, {10, 15}};

	cout << timeOverlap(morning, daytime) << endl;

	return 0;
}
