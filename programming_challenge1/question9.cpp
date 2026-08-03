// Password Validation
#include <cctype>
#include <iostream>
#include <string>

bool validatePassword(std::string password);

int main() {
  std::string password;
  std::cin >> password;

  if (validatePassword(password)) {
    std::cout << "Valid password!" << std::endl;
  } else {
    std::cout << "Password not valid" << std::endl;
  }

  return 0;
}

bool validatePassword(std::string password) {
  if (password.size() < 8) {
    return false;
  }

  bool uppercase = false;
  bool lowercase = false;
  bool digit = false;
  bool noWhitespace = true;
  for (char c : password) {
    if (std::isupper(c)) {
      uppercase = true;
    }
    if (std::islower(c)) {
      lowercase = true;
    }
    if (std::isdigit(c)) {
      digit = true;
    }
    if (std::isspace(c)) {
      noWhitespace = false;
    }
  }

  if (uppercase && lowercase && digit && noWhitespace) {
    return true;
  } else {
    return false;
  }
}
