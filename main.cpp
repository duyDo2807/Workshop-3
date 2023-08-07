#include <iostream>

#include "workshop.h"

int main() {
  double number = 100;
  double* ptrNum = &number;

  changeValue(ptrNum);
  std::cout << number << std::endl;

  double array[] = {1, 2, 3, 4, 5};
  int length = 5;
  printArray(array, length);

  double maxVal = arrayMax(array, length);
  std::cout << maxVal << std::endl;

  double* dynamicArr = dynamicArray(5, 10);
  printArray(dynamicArr, 5);

  return 0;
}