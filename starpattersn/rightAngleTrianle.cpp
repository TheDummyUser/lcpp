#include <bits/stdc++.h>
#include <ostream>
using namespace std;

void pattern5(int N) {
  cout << "patteern 5" << endl;
  ;
  // This is the outer loop which will loop for the rows.
  for (int i = 0; i < N; i++) {
    // This is the inner loop which loops for the columns
    // no. of columns = (N - row index) for each line here.
    for (int j = N; j > i; j--) {
      cout << "* ";
    }

    // As soon as stars for each iteration are printed, we move to the
    // next row and give a line break otherwise all stars
    // would get printed in 1 line.
    cout << endl;
  }
}

// void pattern6(int N) {
//   cout << "patteern 6" << endl;
//   ;
//   // This is the outer loop which will loop for the rows.
//   for (int i = 0; i < N; i++) {
//     // This is the inner loop which loops for the columns
//     // no. of columns = (N - row index) for each line here.
//     for (int j = N; j > i; j--) {
//       cout << N - i + 1 << " ";
//     }

//     // As soon as stars for each iteration are printed, we move to the
//     // next row and give a line break otherwise all stars
//     // would get printed in 1 line.
//     cout << endl;
//   }
// }

void pattern6(int N) {
  // This is the outer loop which will loop for the rows.
  for (int i = 0; i < N; i++) {
    // This is the inner loop which loops for the columns
    // no. of columns = (N - row index) for each line here
    // as we have to print an inverted pyramid.
    // (N-j) will give us the numbers in a row starting from 1 to N-i.
    for (int j = N; j > i; j--) {
      cout << N - j + 1 << " ";
    }

    // As soon as numbers for each iteration are printed, we move to the
    // next row and give a line break otherwise all numbers
    // would get printed in 1 line.
    cout << endl;
  }
}

void pattern7(int N) {
  // This is the outer loop which will loop for the rows.
  for (int i = 0; i < N; i++) {
    // For printing the spaces before stars in each row
    for (int j = 0; j < N - i - 1; j++) {
      cout << " ";
    }

    // For printing the stars in each row
    for (int j = 0; j < 2 * i + 1; j++) {

      cout << "*";
    }

    // For printing the spaces after the stars in each row
    for (int j = 0; j < N - i - 1; j++) {
      cout << " ";
    }

    // As soon as the stars for each iteration are printed, we move to the
    // next row and give a line break otherwise all stars
    // would get printed in 1 line.
    cout << endl;
  }
}

void pattern8(int N) {
  // This is the outer loop which will loop for the rows.
  for (int i = 0; i < N; i++) {
    // For printing the spaces before stars in each row
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    // For printing the stars in each row
    for (int j = 0; j < 2 * N - (2 * i + 1); j++) {

      cout << "*";
    }

    // For printing the spaces after the stars in each row
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    // As soon as the stars for each iteration are printed, we move to the
    // next row and give a line break otherwise all stars
    // would get printed in 1 line.
    cout << endl;
  }
}

void pattern2(int N) {
  cout << "pattern 2" << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern3(int N) {
  cout << "pattern 3" << endl;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << endl;
  }
}

void pattern1(int N) {
  cout << "patthern 1" << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  // Here, we have taken the value of N as 5.
  // We can also take input from the user.
  int N = 5;

  pattern1(N);
  pattern3(N);
  pattern2(N);
  pattern5(N);
  pattern6(N);
  pattern7(N);
  pattern8(N);

  return 0;
}
