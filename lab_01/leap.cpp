/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 1C

  This program is used to tell the user if they year they entered
  is a leap year according to the Gregorian calendar.
*/

if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)

int main() {
  std::cout << "Please enter a year: ";
  int year;
  std::cin >> year;

  if (year % 4 != 0 || year %){
    std::cout << year << " is a common year.";
  } else if (year %)
  return 0;
}
