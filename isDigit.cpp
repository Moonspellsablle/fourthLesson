#include <iostream>

int main() {
  std::cout << "Enter a string (I will grep all numbers from it): ";
  const short LEN_OF_SYMBOLS = 150;
  char symbolsCharArray[LEN_OF_SYMBOLS]{};
  std::cin >> symbolsCharArray;

  const char LOWER_DIGIT_RANGE = '1';
  const char HIGH_DIGIT_RANGE = '9';
  for (size_t i = 0;  symbolsCharArray[i] != '\0'; ++i) {
    if ((symbolsCharArray[i] >= LOWER_DIGIT_RANGE) && (symbolsCharArray[i] <= HIGH_DIGIT_RANGE)) {
      std::cout << symbolsCharArray[i];
    }
  }
  std::cout << std::endl;

  return 0;
}


