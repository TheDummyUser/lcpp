#include "iostream"
#include <string>
using namespace std;

string sliceString(string str) { return str.substr(1, str.size() - 2); }

int main() {
  cout << sliceString("something") << endl;
  cout << sliceString("12") << endl;
  cout << sliceString("abd") << endl;
  cout << sliceString("hellow woasfd") << endl;
  return 0;
}
