#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {3, 4, 5, 1, 2};
  int count = 0;
  int n = nums.size();
  for (int i = 0; i < n - 1; i++) {
    int nextIndex = (i + 1) % n;
    if (nums[i] > nums[nextIndex]) {
      count++;
    } else if (count > 1) {
      cout << "false";
    }
  }
  cout << "true";
  return 0;
}
