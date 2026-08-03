// Manual C-string length
#include <iostream>

int length(const char string[]);

int main() {
  char string[20] = "hello";

  std::cout << "The length of " << string << " is: " << length(string)
            << std::endl;

  return 0;
}

int length(const char string[]) {
  int length = 0;

  for (int i = 0; i < 21; i++) {
    if (string[i] != '\0') {
      length++;
    } else {
      break;
    }
  }

  return length;
}
