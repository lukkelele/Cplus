#include <iostream>
using namespace std;


void swapNumbers(int &x, int &y) {
  int buf;
  buf = x;
  x = y;
  y = buf;
}


int main() {
  int a, b;
  a = 5;
  b = 1;
  cout << "Starting numbers ==> " << a << b << "\n";
  swapNumbers(a, b);
  cout << "After swap ==> " << a << b << "\n";
  return 0;
}
