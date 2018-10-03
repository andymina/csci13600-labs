#include "prime.h"

int nextPrime(int n){
	n++;
	
	while (!isPrime(n)){
		n++;
	}

	return n;
}
