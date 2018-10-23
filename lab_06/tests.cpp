#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.cpp"

TEST_CASE("Caesar Encrypt"){
	CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
}

TEST_CASE("Caesar Decrypt"){
	CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
}

TEST_CASE("Vigenere Encrypt"){
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("Vigenere Decrypt"){
	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}
