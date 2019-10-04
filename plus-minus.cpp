#include <iostream>
using namespace std;

// https://www.hackerrank.com/challenges/plus-minus/problem

int main() {
  int n, i;
  float a, b, c, count1 = 0, count2 = 0, count3 = 0;
  cin >> n;
  int x[n];
  for (i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] > 0) {
      count1 = count1 + 1;
    } else if (x[i] < 0) {
      count2 = count2 + 1;
    } else {
      count3 = count3 + 1;
    }
  }
  a = count1 / n;
  b = count2 / n;
  c = count3 / n;

  cout << a << endl;
  cout << b << endl;
  cout << c;

  return 0;
}
