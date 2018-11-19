#include <iostream>

class Time {
	public:
	    int h;
	    int m;
};

void printTime(Time time);
int toMinutes(Time time);
Time toTime(int minutes);

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
