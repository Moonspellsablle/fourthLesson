#include <iostream>
#include <stdint.h>

void swap(char& first_elem, char& last_elem) {
  char temp = first_elem;
  first_elem = last_elem;
  last_elem = temp;
}

int main() {
  std::cout << "Enter a string (I will revert it): ";
  const uint16_t MAX_COUNT_OF_SYMBOLS = 150;
  char symbolsCharArray[MAX_COUNT_OF_SYMBOLS];
  std::cin >> symbolsCharArray;

  uint16_t halfOfLenArray;
  uint16_t lenOfLine;

  for (size_t i = 0; i < MAX_COUNT_OF_SYMBOLS; ++i) {
    if (symbolsCharArray[i] == '\0') {
      halfOfLenArray = (i / 2);
      lenOfLine = i;
      break;
    }
  }

  for (size_t i = 0; i < halfOfLenArray; ++i) {
    swap(symbolsCharArray[i], symbolsCharArray[(lenOfLine - 1) - i]);
  }

  std::cout << symbolsCharArray << std::endl;

  return 0;
}

