#include <bits/stdc++.h>
using namespace std;

int main() {
  int num = -1232;
  int anum = num;
  int revNum = 0;

  while (num > 0) {
    int ld = num % 10;
    revNum = (revNum * 10) + ld;
    num = num / 10;
  }
  cout << revNum;
  return 0;
}
