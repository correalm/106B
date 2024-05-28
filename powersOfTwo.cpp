#include <iostream>

long raiseToPower(int base, int exponent);
int getUserInput();

int main() {
  getUserInput();
  return 0;
}

int getUserInput() {
  int limit;

  std::cout << "Enter exponent limit: ";
  std::cin >> limit;

  for (int i = 0; i <= limit; i++) {
    std::cout << "2 to the " << i << " = "
              << raiseToPower(2, i) << std::endl;
  }

  return 0;
}

long raiseToPower(int base, int exponent) {
  long result = 1;

  std::cout << result << std::endl;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }

  return result;
}

