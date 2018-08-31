/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 2D

  Prints the first 60 numbers of the Fibonacci Sequence.
*/

#include <iostream>

int main() {
  int seq[60];
  seq[0] = 0;
  seq[1] = 1;

  std::cout << seq[0] << "\n";
  std::cout << seq[1] << "\n";

  for (int i = 2; i < 60; i++){
    seq[i] = seq[i-1] + seq[i-2];
    std::cout << seq[i] << "\n";
  }
}

/*
  As the numbers of the Fibonacci sequence approach the two billion mark,
  the math begins to get fuzzy and incorrect. This is because the array is
  made of ints so at a certain point, the sum of the previous two numbers
  will go past the limit of an int. This will cause an overflow producing
  weird numbers.
*/
