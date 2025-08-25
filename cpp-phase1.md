# Learn C++: From Zero to Ready (Phase 1)

Welcome! This is your friendly guide to C++ basics, inspired by the clarity and progressive approach of Rust docs. Each section introduces a core concept, explains it simply, and provides hands-on code examples and tips for competitive programming.

---

## 1. Your First C++ Program

Want to see C++ in action? Here's a program that prints "Hello, Competitive World!":

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, Competitive World!" << endl;
    return 0;
}
```

Run it, and you’ll see the greeting appear.

- `#include <iostream>` lets us do input/output.
- `using namespace std;` makes `cout` and `cin` easier to write.
- `main` is the starting point. All C++ programs begin here.
- `cout` prints information to your screen.

### Try changing the message and running it again!

---

## 2. Variables & Types: Storing Your Stuff

Variables are *boxes* for your data. You name the box, pick a type, and put information inside:

```cpp
int apples = 5;
long long bigNumber = 9876543210123LL;
double pi = 3.14159;
bool isCodingFun = true;
char grade = 'A';
string name = "Alice";
```

What’s happening here?
- `int`, `long long`, `double`, `bool`, `char`, `string` = data types
- Each type is for a kind of info (numbers, text, true/false, etc.)

**C++ tip:** Always use `long long` for very big numbers. It’s safe for big CP inputs!

---

## 3. Input and Output

Competitive programming = lots of input and output fast! Here’s the basics:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "You entered: " << n << endl;
}
```

**Interactive moment:**
- `cin` gets info from the user
- `cout` prints info
- `endl` moves to a new line

### Fast I/O for the Win
For big problems, you need super-fast reading!

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    // Now read tons of input efficiently!
    return 0;
}
```

---

## 4. C++ Vectors: Your Powerful Lists

Unlike plain arrays, **vectors** grow, shrink, and fit most CP needs perfectly.

```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> scores = {100, 98, 90};
    scores.push_back(85);     // Add element at end

    cout << "All scores:" << endl;
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;

    cout << "Number of scores: " << scores.size() << endl;
}
```

### Why use vectors?
- Grow anytime (`push_back`) and shrink (`pop_back`)
- Always know your size (`vector.size()`).
- Safer and easier than C-style arrays.

#### Sorting vectors the modern way:

```cpp
#include <algorithm>
// ... previous code ...
sort(scores.begin(), scores.end()); // Sort ascending
```

---

## 5. Operators: Doing the Math (and Logic)

```cpp
int a = 6, b = 3;
int sum = a + b;
int prod = a * b;
bool eq = (a == b); // false
bool ok = (a > 0 && b < 10); // true
```

Common operator types:
- Arithmetic: `+ - * / %`
- Comparison: `== != < <= > >=`
- Logical: `&& || !`

---

## 6. Control Flow: Making Decisions

### If-Else: Choose What To Do

```cpp
int x = 15;
if (x > 10) {
    cout << "Big!" << endl;
} else {
    cout << "Not big!" << endl;
}
```

### Switch: Multi-way Choice

```cpp
int grade = 3;
switch (grade) {
    case 1: cout << "First year" << endl; break;
    case 2: cout << "Second year" << endl; break;
    case 3: cout << "Third year" << endl; break;
    default: cout << "Who knows?" << endl;
}
```

---

## 7. Loops: Repeating Things

### For Loops: Repeat N Times

```cpp
for (int i = 0; i < 5; ++i) {
    cout << i << " ";  // Prints: 0 1 2 3 4
}
```

#### Range-based for (the modern way!):

```cpp
vector<string> fruits = {"apple", "banana", "pear"};
for (const string& s : fruits) {
    cout << s << endl;
}
// or using auto for less typing:
for (auto& s : fruits) cout << s << " ";
```

### While Loops: Repeat Until Something Changes

```cpp
int x = 1;
while (x < 10) {
    cout << x << " "; x *= 2; // Prints: 1 2 4 8
}
```

---

## 8. Functions: Creating Reusable Magic

Give your code a name, and call it anytime!

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(3, 5) << endl; // Prints: 8
    return 0;
}
```

Optional: Use `auto` for easy type deduction in modern C++!

```cpp
auto subtract(auto a, auto b) {
    return a - b;
}
```

---

## 9. Pointers & Memory Basics (For the Curious)

Most CP problems won’t need this at first, but if you ever see `*ptr` or `&x`, here’s what’s going on:

```cpp
int a = 10;
int* p = &a; // p now stores address of a
cout << *p << endl; // Prints 10 (value at that address)
*p = 20;
cout << a << endl; // Now a is 20!
```

---

## 10. Small Practice Problems

Try these out!

**1. Print all numbers from 1 to n.**

```cpp
int n;
cin >> n;
for (int i = 1; i <= n; ++i) cout << i << " ";
```

**2. Find the sum of a vector.**

```cpp
vector<int> arr = {2, 8, 3};
int sum = 0;
for (auto x : arr) sum += x;
cout << sum << endl;
```

**3. Reverse a vector using built-in:**

```cpp
vector<int> v = {1, 2, 3};
reverse(v.begin(), v.end());
```

---

## Summary and Next Steps

Congrats! You’ve learned the most important C++ basics for competitive programming. You know how to:
- Write and run a C++ program
- Use variables, input & output, loops, and functions
- Work with vectors for easy, modern CP code

**What’s Next?**
In Phase 2, you’ll learn about the Standard Template Library (STL), which makes C++ even more powerful: sets, maps, queues, algorithms, and more!

Don’t rush—play with the code, experiment, and get comfy. The best way to learn is by coding!

---

**Happy coding, and see you in Phase 2!**