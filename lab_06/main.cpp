#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void test_ascii(string s);
char shiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
string encryptVigenere(string plaintext, string keyword);
string decryptCaesar(string ciphertext, int rshift);
string decryptVigenere(string ciphertext, string keyword);

int main(){
	test_ascii("Hello, world!");

	cout << endl;
	cout << endl;

	cout << "Testing shiftChar with 'H': " << shiftChar('H', 2) << endl;

	cout << endl;
	cout << endl;

	cout << "Encrypt 'A Light-Year Apart' with a Caesar shift of 5: " << endl;
	cout << encryptCaesar("A Light-Year Apart", 5) << endl;

	cout << endl;
	cout << endl;

	cout << "Encrypt 'Hello, World!' with the keyword 'cake': " << endl;
	cout << encryptVigenere("Hello, World!", "cake") << endl;

	cout << endl;
	cout << endl;

	cout << "Decrypt 'F Qnlmy-Djfw Fufwy' with a Caesar shift of 5: " << endl;
	cout << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << endl;

	cout << endl;
	cout << endl;

	cout << "Decrypt 'Jevpq, Wyvnd!' with the keyword 'cake': " << endl;
	cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << endl;

	return 1;
}

void test_ascii(string s){
	for (int i = 0; i < s.length(); i++){
		cout << s[i] << " " << (int)(s[i]) << endl;
	}
}

char shiftChar(char c, int rshift){
	int code = (int)(c);

	if (65 <= code && code <= 90){
		while (rshift > 0){
			code++;

			if (code == 91){
				code = 65;
			}

			rshift--;
		}
	} else {
		while (rshift > 0){
			code++;

			if (code == 123){
				code = 97;
			}

			rshift--;
		}
	}

	return (char)(code);
}

char unshiftChar(char c, int lshift){
	int code = (int)(c);
	lshift *= -1;

	if (65 <= code && code <= 90){
		while (lshift < 0){
			code--;

			if (code == 64){
				code = 90;
			}

			lshift++;
		}
	} else {
		while (lshift < 0){
			code--;

			if (code == 96){
				code = 122;
			}

			lshift++;
		}
	}

	return (char)(code);
}

string encryptCaesar(string plaintext, int rshift){
	string output;

	for (int i = 0; i < plaintext.length(); i++){
		if (isalpha(plaintext[i])){
			output += shiftChar(plaintext[i], rshift);
		} else {
			output += plaintext[i];
		}
	}

	return output;
}

string encryptVigenere(string plaintext, string keyword){
	string output;
	int charIndex = 0;

	for (int i = 0; i < plaintext.length(); i++){
		if (charIndex == keyword.length()){
			charIndex = 0;
		}

		int code = keyword[charIndex];

		if (isalpha(plaintext[i])){
			int shiftAmount = (code - 96) - 1;
			output += shiftChar(plaintext[i], shiftAmount);
			charIndex++;
		} else {
			output += plaintext[i];
		}
	}

	return output;
}

string decryptCaesar(string ciphertext, int rshift){
	string output;

	for (int i = 0; i < ciphertext.length(); i++){
		if (isalpha(ciphertext[i])){
			output += unshiftChar(ciphertext[i], rshift);
		} else {
			output += ciphertext[i];
		}
	}

	return output;
}

string decryptVigenere(string ciphertext, string keyword){
	string output;
	int charIndex = 0;

	for (int i = 0; i < ciphertext.length(); i++){
		if (charIndex == keyword.length()){
			charIndex = 0;
		}

		int code = keyword[charIndex];

		if (isalpha(ciphertext[i])){
			int shiftAmount = (code - 96) - 1;
			output += unshiftChar(ciphertext[i], shiftAmount);
			charIndex++;
		} else {
			output += ciphertext[i];
		}
	}

	return output;
}
