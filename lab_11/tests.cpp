#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "funcs.h"


TEST_CASE("TASK B"){
	CHECK(sumRange(-2, 10) == 52);
	CHECK(sumRange(1, 3) == 6);
}

TEST_CASE("TASK C"){
	int size = 10;
	int *arr = new int[size]; // allocate array dynamically
	arr[0] = 12;
	arr[1] = 17;
	arr[2] = -5;
	arr[3] = 3;
	arr[4] = 7;
	arr[5] = -15;
	arr[6] = 27;
	arr[7] = 5;
	arr[8] = 13;
	arr[9] = -21;

	CHECK(sumArray(arr, size) == 43);
	CHECK(sumArray(arr, 5) == 34);

	delete[] arr;
}

TEST_CASE("TASK D"){
	CHECK(isAlphanumeric("ABCD") == true);
	CHECK(isAlphanumeric("Abcd1234xyz") == true);
	CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}

TEST_CASE("TASK E"){
	CHECK(nestedParens("((()))") == true);
	CHECK(nestedParens("()") == true);
	CHECK(nestedParens("(((") == false);
}
