#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> seen;
  for (int i = 0; i < nums.size(); i++) {
    int comp = target - nums[i];

    if (seen.count(comp)) {
      return {seen[comp], i};
    }
    seen[nums[i]] = i;
  }
  return {};
}
int main() {
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;
  auto result = twoSum(arr, target);
  for (auto r : result) {
    cout << r;
  }
  return 0;
}
