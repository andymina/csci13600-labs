#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "network.h"


TEST_CASE("TASK A"){
	Profile p1("marco", "Marco");
	CHECK(p1.getUsername() == "marco");
	CHECK(p1.getFullName() == "Marco (@marco)");

	p1.setDisplayName("Marco Rossi");
	CHECK(p1.getFullName() == "Marco Rossi (@marco)");
}

TEST_CASE("TASK B"){
	Network nw;

	CHECK(nw.addUser("mario", "Mario") == true);
	CHECK(nw.addUser("luigi", "Luigi") == true);

	CHECK(nw.addUser("mario", "Mario2") == false);
	CHECK(nw.addUser("mario 2", "Mario2") == false);
}

TEST_CASE("TASK C"){
	Network nw;

	nw.addUser("mario", "Mario");
	nw.addUser("luigi", "Luigi");
	nw.addUser("yoshi", "Yoshi");

	nw.follow("mario", "luigi");
	nw.follow("mario", "yoshi");
	nw.follow("luigi", "mario");
	nw.follow("luigi", "yoshi");
	nw.follow("yoshi", "mario");
	nw.follow("yoshi", "luigi");

	CHECK(nw.isFollowing("mario", "luigi") == true);
	CHECK(nw.isFollowing("mario", "yoshi") == true);

	CHECK(nw.isFollowing("luigi", "mario") == true);
	CHECK(nw.isFollowing("luigi", "yoshi") == true);

	CHECK(nw.isFollowing("yoshi", "mario") == true);
	CHECK(nw.isFollowing("yoshi", "luigi") == true);
}

TEST_CASE("TASK D"){
	Network nw;

	nw.addUser("mario", "Mario");
	nw.addUser("luigi", "Luigi");
	nw.addUser("yoshi", "Yoshi");

	CHECK(nw.writePost("mario", "It's a-me, Mario!") == true);
	CHECK(nw.writePost("luigi", "Hey hey!") == true);
	CHECK(nw.writePost("yoshi", "Hi Luigi!") == true);
}
