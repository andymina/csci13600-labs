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
	TimeSlot earlier;
	TimeSlot later;
	if (minutesUntil(ts1.startTime, ts2.startTime) > 0){
		earlier = ts1;
		later = ts2;
	} else {
		earlier = ts2;
		later = ts1;
	}

	int interval = toMinutes(later.startTime) - toMinutes(earlier.startTime);

	if (ts1.movie.duration > interval){
		return true;
	} else {
		return false;
	}
}
