#include <iostream>

void changeValue(double* ptr) { *ptr = 42; }

int main() {
  double number = 100;
  double* ptr = &number;

  changeValue(ptr);

  std::cout << number << std::endl;

  return 0;
}