#include <iostream>

double arrayMax(double* ptr, int length) {
  double max = ptr[0];
  for (int i = 1; i < length; i++) {
    if (max < ptr[i]) {
      max = ptr[i];
    }
  }
  return max;
}

int main() {
  double array[] = {2, 6, 8, 10, 7};
  double* ptr = array;
  int length = 5;
  std::cout << arrayMax(ptr, length) << std::endl;
  return 0;
}