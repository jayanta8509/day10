// Write a program to find Factorial of a number
#include <iostream>
using namespace std;
void fectoral(int a, int b) {
  int res = 1;
  for (int i = a; i <= b; i++) {
    res *= i;
  }
  cout << res;
}

int main() {
  int x = 2, y = 4;
  fectoral(x, y);
}