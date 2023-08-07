#include <iostream>

void changeValue(double* ptr) { *ptr = 42; }

void printArray(double* ptr, int length) {
  for (int i = 0; i < length; i++) {
    std::cout << ptr[i] << " ";
  }
  std::cout << std::endl;
}

double arrayMax(double* ptr, int length) {
  double max = ptr[0];
  for (int i = 1; i < length; i++) {
    if (max < ptr[i]) {
      max = ptr[i];
    }
  }
  return max;
}

double* dynamicArray(int N, double M) {
  double* newArray = new double[N];
  for (int i = 0; i < N; i++) {
    newArray[i] = M;
  }
  return newArray;
}