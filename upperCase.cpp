#include <iostream>
#include <stdint.h>

int main() {
  std::cout << "Enter a string (I will change register to UPPER format): ";
  char symbolsCharArray[150];
  std::cin >> symbolsCharArray;

  const char ASCII_UPPER_CASE_RANGE_STARTS_FROM = 'a';
  const char ASCII_UPPER_CASE_RANGE_END_TO = 'z';
  const uint16_t SHIFT = 32;

  for (auto singleCharFromLine: symbolsCharArray) {
    if (singleCharFromLine == '\0') {
      break;
    }
    std::cout << (((singleCharFromLine >= ASCII_UPPER_CASE_RANGE_STARTS_FROM) && (singleCharFromLine <= ASCII_UPPER_CASE_RANGE_END_TO)) ? char(singleCharFromLine - SHIFT) : singleCharFromLine);
  }
  std::cout << std::endl;
  return 0;
}
