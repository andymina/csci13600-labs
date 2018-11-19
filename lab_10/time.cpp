#include "time.h"

void printTime(Time time){
	std::cout << time.h << ":" << time.m;
}

int toMinutes(Time time){
	return (time.h * 60) + time.m;
}

Time toTime(int minutes){
	Time temp = {0, 0};
	temp.h = minutes / 60;
	temp.m = minutes % 60;
	return temp;
}

int minutesSinceMidnight(Time time){
	return toMinutes(time);
}

int minutesUntil(Time earlier, Time later){
	int first = toMinutes(earlier);
	int second = toMinutes(later);

	return second - first;
}

Time addMinutes(Time time0, int min){
	int temp = toMinutes(time0);
	temp += min;
	return toTime(temp);
}
