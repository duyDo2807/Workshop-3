#include <iostream>

void printArray(double* ptr, int length) {
  for (int i = 0; i < length; i++) {
    std::cout << ptr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  double array[] = {1, 2, 3, 4, 5};
  int length = 5;
  double* ptr = array;
  printArray(ptr, length);
  return 0;
}