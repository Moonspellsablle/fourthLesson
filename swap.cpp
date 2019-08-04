#include <iostream>
#include <cstdint>

void swap(char& first_elem, char& last_elem) {
  char temp = first_elem;
  first_elem = last_elem;
  last_elem = temp;
}

int main() {
  std::cout << "Enter a string (I will revert it): ";
  const uint16_t MAX_COUNT_OF_SYMBOLS = 150;
  char symbolsCharArray[MAX_COUNT_OF_SYMBOLS]{};
  std::cin >> symbolsCharArray;

  uint16_t lenOfLine = 0;

  for (lenOfLine = 0; symbolsCharArray[lenOfLine] != '\0'; ++lenOfLine) {
    ;
  }

   for (char *begin = symbolsCharArray, *end = symbolsCharArray + (lenOfLine  - 1);
       begin <= end; ++begin, --end) {
    swap(*begin, *end);
  }

  std::cout << symbolsCharArray << std::endl;

  return 0;
}
