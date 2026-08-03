// Rotate a vector
#include <cstddef>
#include <iostream>
#include <vector>

void rotateVector(std::vector<int> &nums);

int main() {
  std::vector<int> nums = {1, 2, 3, 4, 5, 6};

  std::cout << "Original vector: ";
  for (size_t i = 0; i < nums.size(); i++) {
    if (i == nums.size() - 1) {
      std::cout << i << '\n';
    } else {
      std::cout << i << ", ";
    }
  }

  std::cout << '\n';
  rotateVector(nums);

  std::cout << "Updated vector: ";
  for (size_t i = 0; i < nums.size(); i++) {
    if (i == nums.size() - 1) {
      std::cout << nums[i] << '\n';
    } else {
      std::cout << nums[i] << ", ";
    }
  }

  return 0;
}

void rotateVector(std::vector<int> &nums) {
  if (nums.empty()) {
    return;
  }

  int last = nums[nums.size() - 1];

  for (size_t i = nums.size() - 1; i > 0; i--) {
    nums[i] = nums[i - 1];
  }

  nums[0] = last;
}
