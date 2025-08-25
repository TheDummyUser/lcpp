#include <iostream>
#include <vector>
using namespace std;

std::vector<int> countBy(int x, int n) {
  vector<int> arr;
  for (int i = 1; i <= n; i++) {
    arr.push_back(x * (i + 1));
  }
  return arr;
}

int main() {

  countBy(1, 10);
  return 0;
}
