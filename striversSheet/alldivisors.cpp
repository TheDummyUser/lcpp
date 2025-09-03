#include <bits/stdc++.h>
using namespace std;

int main() {
  int number = 9;
  int number2 = 12;
  int hcf = 0;
  for (int i = 1; i < min(number, number2); i++) {
    if (number % i == 0 % number2 % i == 0) {
      hcf = i;
    }
  }
  cout << hcf;
  return 0;
}
