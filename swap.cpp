#include <iostream>

void swap(char& first_elem, char& last_elem) {
    char temp;
    temp = first_elem;
    first_elem = last_elem;
    last_elem = temp;
}

int main() {
  std::cout << "Enter a string (I will revert it): ";
  std::string lineStr;
  std::cin >> lineStr;

  int lenOfLine = lineStr.length();
  char sybmolsCharArray[++lenOfLine];
  strcpy(sybmolsCharArray, lineStr.c_str());

  const short int halfOfLenArray = (lenOfLine / 2);

  for (size_t i = 0; i < halfOfLenArray; ++i) {
    swap(sybmolsCharArray[i], sybmolsCharArray[(lenOfLine - 1) - i]);
  }

  for (auto singleCharFromLine: sybmolsCharArray) {
    std::cout << singleCharFromLine;
  }
  std::cout << std::endl;

  return 0;
}
