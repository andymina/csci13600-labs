/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 1C

  This program is used to tell the user if they year they entered
  is a leap year according to the Gregorian calendar.
*/

#include <iostream>

int main() {
  std::cout << "Please enter a year: ";
  int year;
  std::cin >> year;

  if (year % 4 != 0) {
    std::cout << year << " is a common year.\n";
  } else if (year % 100 != 0) {
    std::cout << year << " is a leap year.\n";
  } else if (year % 400 != 0) {
    std::cout << year << " is a common year.\n";
  } else {
    std::cout << year << " is a leap year.\n";
  }

  return 0;
}
