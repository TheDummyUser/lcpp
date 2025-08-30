#include <bits/stdc++.h>
#include <set>
using namespace std;

int removeDuplicates(vector<int> &nums) {
  set<int> values;
  for (int i = 0; i < nums.size(); i++) {
    values.insert(nums[i]);
  }
  for (auto n : values)
    return n;
  return values.size();
}

int main() {
  vector<int> nums = {1, 1, 2};

  auto k = removeDuplicates(nums);
  cout << "k" << k;

  return 0;
}
