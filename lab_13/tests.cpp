#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "vector.hpp"

TEST_CASE("POP"){
	Vector<int> sample(4);
	sample[0] = 1;
	sample[1] = 2;
	sample[2] = 3;
	sample[3] = 4;

	sample.pop();

	CHECK(sample[sample.size() - 1] == 3);
}

TEST_CASE("PUSH"){
	Vector<int> sample(4);
	sample[0] = 1;
	sample[1] = 2;
	sample[2] = 3;
	sample[3] = 4;

	sample.push(5);

	CHECK(sample[sample.size() - 1] == 5);
}

TEST_CASE("INSERT"){
	Vector<int> sample(3);
	sample[0] = 1;
	sample[1] = 2;
	sample[2] = 4;

	sample.insert(3, 2);

	CHECK(sample[2] == 3);
}

TEST_CASE("REMOVE"){
	Vector<int> sample(4);
	sample[0] = 1;
	sample[1] = 2;
	sample[2] = 3;
	sample[3] = 4;

	sample.remove(2);
	CHECK(sample[2] == 4);
}
