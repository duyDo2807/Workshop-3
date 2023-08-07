#include <iostream>

#include "workshop.h"

int main() {
  double number = 100;
  char letter = 'A';
  double* ptrNum = &number;
  char* ptrChar = &letter;

  changeValue(ptrNum);
  std::cout << "Modified value of number: " << number << std::endl;

  double array[] = {1, 2, 3, 4, 5};
  int length = 5;
  printArray(array, length);

  double maxVal = arrayMax(array, length);
  std::cout << "Maximum value in the array: " << maxVal << std::endl;

  double* dynamicArr = dynamicArray(5, 10);
  printArray(dynamicArr, 5);

  return 0;
}