// Number statistics
#include <iostream>
#include <vector>

int main() {
  int size;
  std::cin >> size;

  int num;
  std::vector<int> nums(size);

  for (int i = 0; i < size; i++) {
    std::cin >> num;
    nums[i] = num;
  }

  int min = 999;
  int max = -999;
  int sum = 0;

  for (int num : nums) {
    if (num < min) {
      min = num;
    }
    if (num > max) {
      max = num;
    }
    sum += num;
  }

  double avg = sum / double(size);
  int count = 0;
  for (int num : nums) {
    if (num > avg) {
      count++;
    }
  }

  std::cout << "The smallest value: " << min << '\n';
  std::cout << "The largest value: " << max << '\n';
  std::cout << "The sum: " << sum << '\n';
  std::cout << "The avg: " << avg << '\n';
  std::cout << "The count of nums above avg: " << count << '\n';

  return 0;
}
