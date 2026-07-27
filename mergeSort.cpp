#include <iostream>
#include <vector>

std::vector<int> mergeSort(const std::vector<int> &myVec, size_t start,
                           size_t end);
std::vector<int> merge(const std::vector<int> &vec1,
                       const std::vector<int> &vec2);

int main() {
  std::vector<int> nums = {8, 3, 6, 2, 7};
  std::vector<int> sorted = mergeSort(nums, 0, nums.size());

  for (size_t i = 0; i < sorted.size(); i++) {
    std::cout << sorted[i] << '\n';
  }

  return 0;
}

std::vector<int> mergeSort(const std::vector<int> &myVec, size_t start,
                           size_t end) {
  if (end - start == 0) {
    return std::vector<int>{};
  }

  if (end - start == 1) {
    return std::vector<int>{myVec[start]};
  }

  int middle = start + (end - start) / 2;

  return merge(mergeSort(myVec, start, middle), mergeSort(myVec, middle, end));
}

std::vector<int> merge(const std::vector<int> &vec1,
                       const std::vector<int> &vec2) {
  size_t i = 0;
  size_t j = 0;
  std::vector<int> sorted;
  sorted.reserve(vec1.size() + vec2.size());

  while (i < vec1.size() && j < vec2.size()) {
    if (vec1[i] <= vec2[j]) {
      sorted.push_back(vec1[i]);
      i++;
    } else {
      sorted.push_back(vec2[j]);
      j++;
    }
  }

  while (i < vec1.size()) {
    sorted.push_back(vec1[i]);
    i++;
  }

  while (j < vec2.size()) {
    sorted.push_back(vec2[j]);
    j++;
  }

  return sorted;
}
