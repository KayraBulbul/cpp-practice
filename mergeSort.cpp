#include <iostream>
#include <vector>

std::vector<int> mergeSort(std::vector<int> myVec, int start, int end);
std::vector<int> merge(std::vector<int> vec1, std::vector<int> vec2);

int main() {
  std::vector<int> nums = {8, 3, 6, 2, 7};
  std::vector<int> sorted = mergeSort(nums, 0, nums.size());

  for (size_t i = 0; i < sorted.size(); i++) {
    std::cout << sorted[i] << '\n';
  }

  return 0;
}

std::vector<int> mergeSort(const std::vector<int> myVec, int start, int end) {
  if (end - start == 0) {
    return std::vector<int>{};
  }

  if (end - start == 1) {
    return std::vector<int>{myVec[start]};
  }

  int middle = start + (end - start) / 2;

  return merge(mergeSort(myVec, start, middle), mergeSort(myVec, middle, end));
}

std::vector<int> merge(std::vector<int> vec1, std::vector<int> vec2) {
  size_t i = 0;
  size_t j = 0;
  std::vector<int> sorted;

  while (i < vec1.size() && j < vec2.size()) {
    if (vec1[i] < vec2[j]) {
      sorted.push_back(vec1[i]);
      i++;
    } else {
      sorted.push_back(vec2[j]);
      j++;
    }
  }

  if (i == vec1.size()) {
    for (size_t k = j; k < vec2.size(); k++) {
      sorted.push_back(vec2[k]);
    }
  } else if (j == vec2.size()) {
    for (size_t k = i; k < vec1.size(); k++) {
      sorted.push_back(vec1[k]);
    }
  }

  return sorted;
}
