#include "twin-prime.h"

int nextTwinPrime(int n){
	n++;

	while (!isTwinPrime(n)){
		n++;
	}

	return n;
}
