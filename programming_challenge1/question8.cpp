// Remove a value
#include <iostream>
#include <vector>

std::vector<int> removeValue(const std::vector<int> nums, int removeNum);

int main() {
  std::vector<int> nums = {3, 7, 3, 2, 3, 8};

  std::vector<int> newNums = removeValue(nums, 3);

  for (int num : newNums) {
    std::cout << num << ", "; // I know the , is there for the last one
                              // changing to index based and an if else
                              // to see if i is the last one can fix it
  }

  return 0;
}

std::vector<int> removeValue(const std::vector<int> nums, int removeNum) {
  std::vector<int> newVec;

  for (int num : nums) {
    if (num == removeNum) {
      continue;
    } else {
      newVec.push_back(num);
    }
  }

  return newVec;
}
