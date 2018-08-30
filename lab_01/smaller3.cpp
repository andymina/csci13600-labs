/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 1B

  This program will ask the user for three numbers and return the smaller
  of the three to the console.
*/

#include <iostream>

int main() {
  std::cout << "\nPlease enter the first number: ";
  int firstNumber;
  std::cin >> firstNumber;

  std::cout << "Please enter the second number: ";
  int secondNumber;
  std::cin >> secondNumber;

  std::cout << "Please enter the third number: ";
  int thirdNumber;
  std::cin >> thirdNumber;

  if (firstNumber < secondNumber && firstNumber < thirdNumber){
    std::cout << "\nThe smaller number is " << firstNumber << ".\n\n";
  }
  else if (secondNumber < firstNumber && secondNumber < thirdNumber){
    std::cout << "\nThe smaller number is " << secondNumber << ".\n\n";
  }
  else if (thirdNumber < firstNumber && thirdNumber < secondNumber){
    std::cout << "\nThe smaller number is " << thirdNumber << ".\n\n";
  }

  return 0;
}
