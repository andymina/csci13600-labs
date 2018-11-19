#include "timeSlot.h"

void printTimeSlot(TimeSlot ts){
	printMovie(ts.movie);
	std::cout << " [starts at ";
	printTime(ts.startTime);
	std::cout << ", ends at ";
	printTime(addMinutes(ts.startTime, ts.movie.duration));
	std::cout << "]" << std::endl;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
	Time end = addMinutes(ts.startTime, ts.movie.duration);
	TimeSlot temp = {nextMovie, end};
	return temp;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
	Time first = ts1.startTime;
	Time second = ts2.startTime;
	TimeSlot earlier;
	TimeSlot later;

	int firstMin = minutesSinceMidnight(first);
	int secondMin = minutesSinceMidnight(second);

	if (firstMin < secondMin){
		earlier = ts1;
		later = ts2;
	} else if (secondMin < firstMin){
		earlier = ts2;
		later = ts1;
	}

	if ((toMinutes(earlier.startTime) - toMinutes(later.startTime)) > toMinutes(earlier.startTime)){
		return true;
	} else {
		return false;
	}
}
