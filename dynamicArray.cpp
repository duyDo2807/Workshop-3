#include <iostream>

double* dynamicArray(int N, double M) {
  double* newArray = new double[N];
  for (int i = 0; i < N; i++) {
    newArray[i] = M;
  }
  return newArray;
}

int main() {
  int N = 5;
  double M = 10;

  double* dynamicArr = dynamicArray(N, M);

  for (int i = 0; i < N; i++) {
    std::cout << dynamicArr[i] << " ";
  }
  std::cout << std::endl;

  delete[] dynamicArr;

  return 0;
}