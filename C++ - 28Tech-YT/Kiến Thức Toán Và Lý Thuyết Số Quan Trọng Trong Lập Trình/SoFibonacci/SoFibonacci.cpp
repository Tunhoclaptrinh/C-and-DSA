#include <bits/stdc++.h>

using namespace std;

long long fibo(int n) {
  if (n == 1) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }

  return fibo(n - 1) + fibo(n - 2);
}

long long fibo2(int n) {
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;

  long long res1 = 0; // F(1)
  long long res2 = 1; // F(2)
  long long res3;

  for (int i = 3; i <= n; i++) {
    res3 = res1 + res2; // F(i)
    res1 = res2;
    res2 = res3;
  }

  return res2; // F(n)
}

long long fibo3(int n) {
  if (n > 92)
    return -1; // tránh overflow

  long long fibo_3[93];
  fibo_3[1] = 0;
  fibo_3[2] = 1;
  for (int i = 3; i <= n; i++) {
    fibo_3[i] = fibo_3[i - 1] + fibo_3[i - 2];
  }

  return fibo_3[n];
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
      cout << fibo(i) << ' ';
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
      cout << fibo2(i) << ' ';
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
      cout << fibo3(i) << ' ';
    }
    cout << endl;
  }

  return 0;
}