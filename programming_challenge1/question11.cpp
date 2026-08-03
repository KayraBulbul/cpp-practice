// Second-largest value
#include <iostream>
#include <vector>

int secondLargest(const std::vector<int> nums);

int main() {
  std::vector<int> nums = {10, 4, 10, 7, 3};
  int num = secondLargest(nums);

  std::cout << "Second largest num is: " << num << '\n';

  return 0;
}

int secondLargest(const std::vector<int> nums) {
  if (nums.size() < 2) {
    return -1;
  }

  int largest = -999;
  int secondLargest = -999;
  for (int num : nums) {
    if (num > largest) {
      largest = num;
    }
    if (num > secondLargest && num < largest) {
      secondLargest = num;
    }
  }

  return secondLargest;
}
