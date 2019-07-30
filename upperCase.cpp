#include <iostream>

char upperCase(char singleChar) {
  const short int asciiLowerCaseRangeStartFrom = 97;
  const short int asciiLowerCaseRangeEnd = 122;
  const short int shift = 32;

  if ((singleChar >= asciiLowerCaseRangeStartFrom) && (singleChar <= asciiLowerCaseRangeEnd)) {
    return singleChar - shift;
  } else {
    return singleChar;
  }
}

int main() {
  std::cout << "Enter a string (I will change register to UPPER format): ";
  std::string lineStr;
  std::cin >> lineStr;

  int lenOfLine = lineStr.length();
  char sybmolsCharArray[++lenOfLine];
  strcpy(sybmolsCharArray, lineStr.c_str()); 

  for (auto singleCharFromLine: sybmolsCharArray) {
    std::cout << upperCase(singleCharFromLine);

  }
  std::cout << std::endl;

  return 0;
}
