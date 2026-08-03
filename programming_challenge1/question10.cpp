// Character frequency
#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string string = "Australian Animals";
  char targetChar = 'a';
  int count = 0;

  for (char c : string) {
    if (std::tolower(c) == targetChar) {
      count++;
    }
  }

  std::cout << "There are " << count << " " << targetChar << "'s in the string"
            << '\n';

  return 0;
}
