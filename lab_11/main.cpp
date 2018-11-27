#include <iostream>
#include "funcs.h"

using std::endl;

int main(){
	cout << "Printing numbers between -2 and 10" << endl;
	printRange(-2, 10);
	cout << endl;

	cout << endl;

	int y = sumRange(-2, 10);
	cout << "Sum of numbers between -2 and 10 inclusive: " << y << endl;

	cout << endl;

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

	int sum1 = sumArray(arr, size); // Add all elements
	cout << "Sum of the array: " << sum1 << endl;  // Sum is 43

	int sum2 = sumArray(arr, 5); // Add up first five elements
	cout << "Sum of the first five elements of the array: " << sum2 << endl;  // Sum is 34

	delete[] arr;

	cout << endl;

	cout << "Is \"ABCD\" alpha-numeric: " << isAlphanumeric("ABCD") << endl;        // true (1)
	cout << "Is \"Abcd1234xyz\" alpha-numeric: " << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
	cout << "Is \"KLMN 8-7-6\" alpha-numeric: " << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

	cout << endl;

	cout << "\"((()))\" has nested parents: " << nestedParens("((()))") << endl;      // true (1)
	cout << "\"()\" has nested parens: " << nestedParens("()") << endl;          // true (1)
	cout << " has nested parens: " << nestedParens("") << endl;            // true (1)

	cout << "\"(((\" has nested parens: " << nestedParens("(((") << endl;         // false (0)
	cout << "\"(()\" has nested parens: " << nestedParens("(()") << endl;         // false (0)
	cout << "\")(\" has nested parens: " << nestedParens(")(") << endl;          // false (0)
	cout << "\"a(b)c\" has nested parens: " << nestedParens("a(b)c") << endl;       // false (0)

	return 0;
}
