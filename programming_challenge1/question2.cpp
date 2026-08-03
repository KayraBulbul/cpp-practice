// Largest value
#include <iostream>

int main() {
  int num1;
  int num2;
  int num3;
  int max = -999;

  std::cin >> num1;
  std::cin >> num2;
  std::cin >> num3;

  if (num1 > max) {
    max = num1;
  }
  if (num2 > max) {
    max = num2;
  }
  if (num3 > max) {
    max = num3;
  }

  std::cout << max << std::endl;

  return 0;
}
