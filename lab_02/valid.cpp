/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 2A

  Asks the user to input an integer in the range 0 to 100. If the number is out of range,
  the program prompts re-enter until a valid number is input. After a valid value is obtained,
  the number squared is printed.
*/

#include <iostream>

int main() {
  std::cout << "Please enter a number between 0 and 100: ";
  int userNumber;
  std::cin >> userNumber;

  while (userNumber <= 0 || userNumber >= 100) {
    std::cout << "Please enter a number between 0 and 100: ";
    std::cin >> userNumber;
  }

  std::cout << "\nYour number sqaured is: " << (userNumber * userNumber) << ".\n";

  return 0;
}
