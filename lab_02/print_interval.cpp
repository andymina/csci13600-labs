/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 2B

  Prints the numbers between user-defined lower and upper limits inclusive.
*/

#include <iostream>

int main(){
  int lower;
  int upper;

  std::cout << "Please enter your lower limit: ";
  std::cin >> lower;

  std::cout << "Please enter your upper limit: ";
  std::cin >> upper;

  for(int i = lower; i < upper; i++) {
    std::cout << i << " ";
  }

  std::cout << "\n";

  return 0;
}
