// Write a program to calculate GCD of two numbers 

// (i) with recursion 

#include <iostream>
using namespace std;

int gcdWithRec(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcdWithRec(b, a % b);
}

// (ii) without recursion.

int gcdWithoutRec(int a, int b) {
  while (a != b) {
    if (a > b) {
      a -= b;
    } else {
      b -= a;
    }
  }
  return a;
}

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // With recursion
  // cout << "GCD: " << gcdWithRec(a, b) << endl;

  // Without recursion
  cout << "GCD: " << gcdWithoutRec(a, b) << endl;

  return 0;
}
