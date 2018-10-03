#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "divisible.h"
#include "prime.h"
#include "next-prime.h"
#include "count-primes.h"
#include "twin-prime.h"
#include "next-twin-prime.h"
#include "largest-twin-prime.h"

TEST_CASE("Divisible"){
	CHECK(isDivisible(5, 2) == 0);
	CHECK(isDivisible(6, 2) == 1);
}

TEST_CASE("Prime"){
	CHECK(isPrime(17) == 1);
	CHECK(isPrime(21) == 0);
}

TEST_CASE("Next Prime"){
	CHECK(nextPrime(14) == 17);
	CHECK(nextPrime(17) == 19);
}

TEST_CASE("Count Primes"){
	CHECK(countPrimes(2, 7) == 4);
	CHECK(countPrimes(14, 21) == 2);
}

TEST_CASE("Twin Prime"){
	CHECK(isTwinPrime(3) == 1);
	CHECK(isTwinPrime(19) == 1);
}

TEST_CASE("Next Twin Prime"){
	CHECK(nextTwinPrime(3) == 5);
	CHECK(nextTwinPrime(17) == 19);
}

TEST_CASE("Largest Twin Prime"){
	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);
}
