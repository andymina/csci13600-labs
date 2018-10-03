#include "prime.h"

bool isTwinPrime(int n){
	if (n == 2){
		return false;
	}

	return isPrime(n) && (isPrime(n - 2) || isPrime(n + 2));
}
