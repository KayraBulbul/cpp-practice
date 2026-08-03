// Positive, Negative, Zero
#include <iostream>

int main() {
  int num;

  std::cin >> num;
  if (num < 0) {
    std::cout << "Negative" << std::endl;
  } else if (num == 0) {
    std::cout << "Zero" << std::endl;
  } else {
    std::cout << "Positive" << std::endl;
  }

  return 0;
}
