#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"

// if word starts with a vowel, just add "ay" at the end
// if word doesnt start with a vowel, move the first letter to the end then add "ay"

TEST_CASE("Pig Latin Tester"){
	CHECK(piglatinify("congratulate") == "ongratulatecay");
	CHECK(piglatinify("acoustics") == "acousticsay");
	CHECK(piglatinify("apologize") == "apologizeay");
	CHECK(piglatinify("laborer") == "aborerlay");
	CHECK(piglatinify("stray") == "traysay");
}
