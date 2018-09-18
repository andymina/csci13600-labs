/*
  Author: Andy Mina
  Course: CSCI-133
  Instructor: Mike Zamansky
  Assignment: Lab 2C

  Creates a simple UI for the user to change values in an int array of length 10 that is filled with 1s
  by default. Exits when the user enters a non-valid index.
*/

#include <iostream>

int main() {
  int myData[10];
  int updateIndex;
  int updatedValue;

  for(int i = 0; i < 10; i++) {
    myData[i] = 1;
  }

  do {
    for(int i = 0; i < 10; i++) {
      std::cout << myData[i] << " ";
    }

    std::cout << "\n";

    std::cout << "Index to update: ";
    std::cin >> updateIndex;

    std::cout << "Enter the new value: ";
    std::cin >> updatedValue;

    if (updateIndex >= 0 && updateIndex <= 9) {
      myData[updateIndex] = updatedValue;
    }

  } while (updateIndex >= 0 && updateIndex <= 9);

  std::cout << "\nYou can no longer edit the array because you entered an out of bound index.\n";

  return 0;
}
