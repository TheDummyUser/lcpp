#include <iostream>
#include <ostream>
using namespace std;

int main() {
  // rect pattern
  //  *****
  //  *****
  //  *****
  //  *****
  //  *****
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
