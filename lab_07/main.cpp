#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string removeLeadingSpaces(string line);
int countChar(string line, char c);

int main(){
	string line;
	string body;

	int blocks = 0;

	while (getline(cin, line)){
		string corrected = removeLeadingSpaces(line);

		if (corrected[0] == '}'){
			blocks -= 1;
		}
		for (int i = 0; i < blocks; i++){
			body += "\t";
		}

		blocks += countChar(line, '{');
		blocks -= countChar(line, '}');

		body += corrected + "\n";
	}

	cout << body << endl;

	return 0;
}

string removeLeadingSpaces(string line){
	string output;
	int index = 0;

	while (isspace(line[index]) != 0){
		index++;
	}

	output = line.substr(index);

	return output;
}

int countChar(string line, char c){
	int counter = 0;

	for (int i = 0; i < line.length(); i++){
		if (line[i] == c){
			counter++;
		}
	}

	return counter;
}
