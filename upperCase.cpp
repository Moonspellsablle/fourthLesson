#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Enter a string (I will change register to UPPER format): ";
  const uint16_t LEN_OF_SYMBOLS = 150;
  char symbolsCharArray[LEN_OF_SYMBOLS]{};
  std::cin >> symbolsCharArray;

  const char ASCII_UPPER_CASE_RANGE_STARTS_FROM = 'a';
  const char ASCII_UPPER_CASE_RANGE_END_TO = 'z';
  const uint16_t SHIFT = 32;

  for (size_t i = 0;  symbolsCharArray[i] != '\0'; ++i) {
    std::cout << (((symbolsCharArray[i] >= ASCII_UPPER_CASE_RANGE_STARTS_FROM) && \
    (symbolsCharArray[i] <= ASCII_UPPER_CASE_RANGE_END_TO)) ? \
    char(symbolsCharArray[i] - SHIFT) : \
    symbolsCharArray[i]);
  }
  std::cout << std::endl;
  return 0;
}
