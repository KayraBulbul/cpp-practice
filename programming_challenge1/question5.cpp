// Count even values
#include <iostream>
#include <vector>

int countEvens(const std::vector<int> nums);

int main() {
  std::vector<int> nums = {4, 7, 2, 9, 10};

  int numEvens = countEvens(nums);

  std::cout << numEvens << std::endl;

  return 0;
}

int countEvens(const std::vector<int> nums) {
  int count = 0;

  for (int num : nums) {
    if (num % 2 == 0) {
      count++;
    }
  }

  return count;
}
