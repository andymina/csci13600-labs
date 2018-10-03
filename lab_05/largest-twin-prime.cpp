#include "twin-prime.h"
#include "next-twin-prime.h"

int largestTwinPrime(int a, int b){
	if (isTwinPrime(b)){
		return b;
	}

	int highest = a;
	
	if (nextTwinPrime(a) > b){
		return - 1;
	}

	while (a < b){
		a = nextTwinPrime(a);

		if (a > highest) {
			highest = a;
		}

		a++;
	}

	return highest;
}
