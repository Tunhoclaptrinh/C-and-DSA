#include <bits/stdc++.h>
using namespace std;

bool isFibo(long long n) {
  if (n == 0 || n == 1)
    return true;

  long long fibo[93];
  fibo[1] = 0;
  fibo[2] = 1;
  for (int i = 3; i <= 92; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
    if (fibo[i] == n) {
      return true;
    } else if (fibo[i] > n) {
      return false;
    }
  }

  return false;
}

bool isFibo2(long long n) {
  if (n == 0 || n == 1)
    return true;

  long long f1 = 0, f2 = 1;
  while (true) {
    long long f3 = f1 + f2;
    if (f3 == n)
      return true;
    if (f3 > n)
      return false;
    f1 = f2;
    f2 = f3;
  }
}

bool isPerfectSquare(long long x) {
  long long r = sqrt(x);
  return r * r == x;
}

bool isFibo3(long long n) {
  return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
  int n;
  cin >> n;

  if (isFibo(n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  cout << endl;

  if (isFibo2(n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  cout << endl;

  if (isFibo3(n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  cout << endl;

  return 0;
}