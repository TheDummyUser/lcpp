#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 5};
  int k = 2;
  unordered_map<int, int> freq;
  for (int num : nums)
    freq[num]++;
  vector<pair<int, int>> f(freq.begin(), freq.end());
  sort(f.begin(), f.end());
  for (auto a : f)
    cout << a.first << a.second;
  return 0;
}
