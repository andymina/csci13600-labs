#include <iostream>
#include <string>
#include "vector.hpp"

using std::cout;
using std::endl;
using std::string;

int main(){
	Vector<int> sample;
	sample.push(1);
	sample.push(2);
	sample.push(4);
	string result = sample.toString();
	cout << result << endl;

	sample.insert(3, 2);
	result = sample.toString();
	cout << result << endl;
	return 0;
}
