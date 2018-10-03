#include "prime.h"
#include "next-prime.h"

int countPrimes(int a, int b){
	int counter = 0;

	if (!isPrime(a)){
		counter--;
	}

	while (a < b + 1){
		a = nextPrime(a);
		counter++;
	}

	return counter;
}
