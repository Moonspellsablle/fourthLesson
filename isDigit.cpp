#include <iostream>

int main() {
  std::cout << "Enter a string (I will grep all numbers from it): ";
  char symbolsCharArray[150];
  std::cin >> symbolsCharArray;

  const char LOWER_DIGIT_RANGE = '1';
  const char HIGH_DIGIT_RANGE = '9';
  for (auto singleCharFromLine: symbolsCharArray) {
    if (singleCharFromLine == '\0') {
      break;
    }
    if ((singleCharFromLine >= LOWER_DIGIT_RANGE) && (singleCharFromLine <= HIGH_DIGIT_RANGE)) {
      std::cout << singleCharFromLine;
    }
  }
  std::cout << std::endl;

  return 0;
}
