#include <iostream>
#include "pig.hpp"

std::string piglatinify(std::string s) {
  char first = s[0];
  if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
    return s + "ay";
  } else {
    return s.substr(1, s.length()-1) + s[0] + "ay";
  }
}
