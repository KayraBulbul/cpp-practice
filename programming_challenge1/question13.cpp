// Palindrome C string
#include <cctype>
#include <iostream>

bool isPalindrome(const char word[]);

int main() {
  char word[19] = "Racecar";

  if (isPalindrome(word)) {
    std::cout << word << " is a palindrome!" << '\n';
  } else {
    std::cout << word << " is not a palindrome" << '\n';
  }

  return 0;
}

bool isPalindrome(const char word[]) {
  int i = 0;
  int endIndex = -1;

  for (int j = 0; j < 20; j++) {
    if (word[j] != '\0') {
      endIndex++;
    } else {
      break;
    }
  }

  while (i <= endIndex) {
    if (std::tolower(word[i]) == std::tolower(word[endIndex])) {
      endIndex--;
      i++;
    } else {
      return false;
    }
  }

  return true;
}
