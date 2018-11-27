#include "funcs.h"

void printRange(int left, int right){
	if (left <= right){
		cout << left << " ";
		printRange(left + 1, right);
	}
}

int sumRange(int left, int right){
	int sum = 0;

	if (left <= right){
		sum = left + sumRange(left + 1, right);
	}

	return sum;
}

int sumArray(int *arr, int size){
	return sumArrayInRange(arr, 0, size - 1);
}

int sumArrayInRange(int *arr, int left, int right){
	int sum = 0;

	if (left <= right){
		sum = arr[left] + sumArrayInRange(arr, left + 1, right);
	}

	return sum;
}

bool isAlphanumeric(string s){
	if (s.length() == 0){
		return true;
	} else {
		return (isalnum(s[0]) != 0) && isAlphanumeric(s.substr(1, s.length()));
	}
}

bool nestedParens(string s){
	if (s.length() == 0){
		return true;
	}

	return (s[0] == '(' && s[s.length() - 1] == ')') && nestedParens(s.substr(1, s.length() - 2));
}
