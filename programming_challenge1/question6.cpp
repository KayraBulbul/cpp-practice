// Reverse a string
#include <iostream>
#include <string>

std::string reverse(const std::string original);

int main() {
  std::string word;
  std::cin >> word;

  std::string reversed = reverse(word);

  std::cout << reversed << std::endl;
  return 0;
}

std::string reverse(const std::string original) {
  std::string output = "";

  for (int i = original.length() - 1; i >= 0; i--) {
    output += original[i];
  }

  return output;
}
