#include <ios>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie();
  long long n;
  cin >> n;
  vector<long long> out;
  out.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      long long a = n / 2;
      n = a;
      out.push_back(a);
    } else {
      n = (n * 3) + 1;
      out.push_back(n);
    }
  }
  for (long long a : out) {
    cout << a << " ";
  }
  cout << "\n";
  return 0;
}
