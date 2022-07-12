#include <iostream>
using namespace std;


int main() {
  
  int a = 5;
  int b = 12;
  int* ptr = &a;
  cout << "int* ptr = " << ptr << endl;
  cout << "*(int* ptr) = " << *ptr << endl;
  cout << "beginning ==> int b = " << b << endl;
  int* c = &b;
  int* d = c;
  *d = 9;
  cout << "int* d = " << d << endl;
  cout << "*(int* d) = " << *d << endl;
  cout << "int b = " << b << endl;

  return 0;
}


