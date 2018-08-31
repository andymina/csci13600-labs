/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 1D

  This program is meant to return the number of days in the month that the user inputs given the year.
*/

#include <iostream>

/*
  This function returns true if the given year is a leap year,
  and false if the given year is a common year.
*/

bool isLeapYear(int yearNumber) {
  if (yearNumber % 4 != 0) {
    return false;
  } else if (yearNumber % 100 != 0) {
    return true;
  } else if (yearNumber % 400 != 0) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int year;
  std::cout << "Please enter a year: ";
  std::cin >> year;

  int month;
  std::cout << "Please enter a month (1-12): ";
  std::cin >> month;

/*
  The two constants below are defined to avoid the repetition of typing
  "31 days." and "30 days."
*/

  const int KNUCKLE_BUMP = 31;
  const int KNUCKLE_GAP = 30;

  if (month == 2){
    if (isLeapYear(year)) {
      std::cout << "\n29 days.\n";
    } else {
      std::cout << "\n28 days.\n";
    }
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    std::cout << KNUCKLE_GAP << " days.\n";
  } else {
    std::cout << KNUCKLE_BUMP << " days.\n";
  }

  return 0;
}
