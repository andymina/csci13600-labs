/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 1A

  This program will ask the user for two numbers and return the smaller
  of the two to the console.
*/

#include <iostream>

int main() {
  std::cout << "\nPlease enter the first number: ";
  int firstNumber;
  std::cin >> firstNumber;

  std::cout << "Please enter the second number: ";
  int secondNumber;
  std::cin >> secondNumber;

  if (firstNumber > secondNumber){
    std::cout << "\nThe smaller number is " << secondNumber << ".\n\n";
  } else if (firstNumber < secondNumber){
    std::cout << "\nThe smaller number is " << firstNumber << ".\n\n";
  } else {
    std::cout << "\nYou entered the same number twice.\n\n";
  }

  return 0;
}
