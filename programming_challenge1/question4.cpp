// Sum of a range
#include <iostream>

int main() {
  int start;
  int end;
  int sum = 0;

  std::cin >> start;
  std::cin >> end;

  if (start > end) {
    for (int i = start; i >= end; i--) {
      sum += i;
    }
  } else if (end > start) {
    for (int i = start; i <= end; i++) {
      sum += i;
    }
  } else {
    sum = start + end;
  }

  std::cout << sum << std::endl;

  return 0;
}
