#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {3, 4, 5, 6};
  int target = 7;
  unordered_map<int, int> prevMap;

  for (int i = 0; i < nums.size(); i++) {
    int diff = target - nums[i];
    if (prevMap.find(diff) != prevMap.end()) {
      cout << prevMap[diff] << i << endl;
      return 0;
    }
    prevMap.insert({nums[i], i});
  }
  return 0;
}
