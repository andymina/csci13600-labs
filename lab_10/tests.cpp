#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "timeSlot.h"

Time first = {10, 30};
Time second = {13, 40};

TEST_CASE("TASK A"){
	CHECK(minutesUntil(first, second) == 190);
	CHECK(minutesSinceMidnight(first) == 630);
}

TEST_CASE("TASK B"){
	Time temp = {11, 30};
	Time test = addMinutes(first, 60);
	CHECK(test.h == temp.h);
	CHECK(test.m == temp.m);
}

TEST_CASE("TASK D"){
	Movie movie1 = {"Back to the Future", COMEDY, 91};
	TimeSlot morning = {movie1, {9, 15}};
	TimeSlot temp = scheduleAfter(morning, movie1);

	Time end = addMinutes(morning.startTime, morning.movie.duration);
	TimeSlot check = {movie1, end};

	CHECK(temp.startTime.h == check.startTime.h);
	CHECK(temp.startTime.m == check.startTime.m);
}

TEST_CASE("TASK E"){
	Movie movie1 = {"Back to the Future", COMEDY, 91};
	Movie movie2 = {"Black Panther", ACTION, 134};

	TimeSlot morning = {movie1, {9, 15}};
	TimeSlot daytime = {movie2, {10, 15}};

	CHECK(timeOverlap(morning, daytime) == true);
}
