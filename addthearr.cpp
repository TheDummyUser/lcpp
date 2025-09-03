#include <bits/stdc++.h>
using namespace std;

int rec_func(vector<int> a, int b) {
  if (b == 0) {
    return a[b];
  } else {
    return a[b] + rec_func(a, b - 1);
  }
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int sum = rec_func(arr, arr.size() - 1);
  cout << sum << "\n";
  return 0;
}
