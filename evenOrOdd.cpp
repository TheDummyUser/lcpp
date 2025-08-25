#include <iostream>
using namespace std;

std::string even_or_odd(int number) {
  if (number % 2 == 0) {
    return "true";
  }
  return "false";
}

int main() { even_or_odd(5); }
