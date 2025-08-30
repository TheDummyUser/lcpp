#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> saves;
  vector<int> add;
  for (int i = 1; i <= n; i++) {
    int b;
    cin >> b;
    saves.push_back(b);
  }
  int score_k = saves[k - 1];

  for (auto a : saves) {
    if (a >= score_k && a > 0) {
      add.push_back(a);
    }
  }
  cout << add.size();
  return 0;
}
