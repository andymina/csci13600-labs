#define CATCH_CONFIG_MAIN
#include "main.cpp"
#include "catch.hpp"

TEST_CASE("Task A"){
	CHECK(east_storage("01/01/2016") == 71.99);
	CHECK(east_storage("12/31/2016") == 58.12);
	CHECK(east_storage("05/20/2016") == 79.88);
}

TEST_CASE("Task B"){
	CHECK(min_storage() == 49.34);
	CHECK(max_storage() == 81);
}

TEST_CASE("Task C"){
	CHECK(compare("09/13/2016", "09/17/2016") ==
	"09/13/2016 East\n09/14/2016 East\n09/15/2016 Equal\n09/16/2016 West\n09/17/2016 West");

	CHECK(compare("09/29/2016", "10/02/2016") ==
	"09/29/2016 West\n09/30/2016 West\n10/01/2016 West\n10/02/2016 West");
}

TEST_CASE("Task D"){
	CHECK(reverse("9/13/2016", "09/17/2016") ==
	"09/17/2016  575.4 ft\n09/16/2016 575.61 ft\n09/15/2016  575.75 ft\n09/14/2016  575.79 ft\n09/13/2016  575.93 ft");

	CHECK(reverse("05/29/2016", "06/02/2016") ==
	"06/02/2016 587.66 ft\n06/01/2016 587.81 ft\n05/31/2016 587.93 ft\n05/30/2016 588.02 ft\n05/29/2016 588.17 ft");
}
