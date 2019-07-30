#include <iostream>

int main() {
  std::cout << "Enter a string (I will grep all numbers from it): ";
  std::string lineStr;
  std::cin >> lineStr;

  int lenOfLine = lineStr.length();
  char sybmolsCharArray[++lenOfLine];
  strcpy(sybmolsCharArray, lineStr.c_str()); 

  const short int asciiDigitsRangeStartFrom = 48;
  const short int asciiDigitsRangeEnd = 58;
  for (auto singleCharFromLine: sybmolsCharArray) {
    if ((int(singleCharFromLine) >= asciiDigitsRangeStartFrom) && (int(singleCharFromLine) <= asciiDigitsRangeEnd)) {
      std::cout << int(singleCharFromLine) - asciiDigitsRangeStartFrom << " ";
    }
  }
  std::cout << std::endl;

  return 0;
}

