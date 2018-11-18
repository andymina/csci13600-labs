#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "particle.h"
#include "space3d.h"

Coord3D *p1 = createCoord3D(10, 20, 30);
Coord3D *p2 = createCoord3D(20, 40, 40);
Coord3D *p3 = createCoord3D(30, 60, 50);

Coord3D *vel = createCoord3D(1, 1, 1);

TEST_CASE("TASK A"){
	CHECK(length(p1) ==  37.416573867739413855837487323165493017560198077787269);
	CHECK(length(p2) ==  60.0);
}

TEST_CASE("TASK B"){
	CHECK(fartherFromOrigin(p1, p2) == p2);
	CHECK(fartherFromOrigin(p2, p3) == p3);
}

TEST_CASE("TASK C"){
	move(p1, vel, 1);
	CHECK((*p1).x == 11);
	CHECK((*p1).y == 21);
	CHECK((*p1).z == 31);
}
