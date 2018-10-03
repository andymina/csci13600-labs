#include "divisible.h"

bool isPrime(int n){
	for (int i = 2; i < n; i++){
		if (isDivisible(n, i)){
			return false;
		}
	}

	return true;
}
