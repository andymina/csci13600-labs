#include <iostream>
#include "divisible.h"
#include "prime.h"
#include "next-prime.h"
#include "count-primes.h"
#include "twin-prime.h"
#include "next-twin-prime.h"
#include "largest-twin-prime.h"

using std::cout;
using std::endl;

int main() {
	cout << "Is 2 divisible by 1? " << isDivisible(2, 1) << endl;
	cout << "Is 3 divisible by 2? " << isDivisible(3, 2) << endl;

	cout << "Is 7 prime? " << isPrime(7) << endl;
	cout << "Is 10 prime? " << isPrime(10) << endl;

	cout << "Next prime after 14: " << nextPrime(14) << endl;
	cout << "Next prime after 17: " << nextPrime(17) << endl;

	cout << "There are " << countPrimes(2, 7) << " prime numbers between 2 and 7" << endl;
	cout << "There are " << countPrimes(14, 21) << " prime numbers between 14 and 21" << endl;

	cout << "Is 17 a twin prime? " << isTwinPrime(17) << endl;
	cout << "Is 3 a twin prime? " << isTwinPrime(3) << endl;

	cout << "Next twin prime after 3: " << nextTwinPrime(3) << endl;
	cout << "Next twin prime after 17: " << nextTwinPrime(17) << endl;

	cout << largestTwinPrime(14, 31) << " is the largest twin prime between 14 and 31." << endl;
	cout << largestTwinPrime(14, 16) << " is the largest twin prime between 14 and 14." << endl;

	return 0;
}
