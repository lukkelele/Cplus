#include <iostream>
using namespace std;

void menu();

int add(int a, int b) {
  int sum = a + b;
  return sum;
}

int subtract(int a, int b) {
  int diff = a - b;
  return diff;
}

void menu(int x) {
  int a, b, sum;
  if (x == 1) { // add
    cout << "First number to add: ";
    cin >> a;
    cout << "Second number to add: ";
    cin >> b;
    sum = a + b;
    cout << "Sum ==> " << sum << "\n";
  }
}

int main() {
  int x;
  cout << "Calculator written in C++\n";
  while (true) {
    cout << "Enter a number from 1-4: ";
    cin >> x;
    menu(x);
  }
}


