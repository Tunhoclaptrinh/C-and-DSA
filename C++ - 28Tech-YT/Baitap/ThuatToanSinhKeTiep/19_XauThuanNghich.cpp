#include <bits/stdc++.h>
using namespace std;
int n, arr[11], ok;

void init() {
  for (int i = 1; i <= n; i++) {
    arr[i] = 0;
  }
}

void next() {
  int i = n;
  while (i >= 1 && arr[i] == 1) {
    arr[i] = 0;
    i--;
  }

  if (i == 0) {
    ok = 0; // dừng khi tất cả các bit là 1 rồi
  } else {
    arr[i] = 1;
  }
}

int main() {

  cin >> n;
  ok = 1;
  if (n % 2 == 0) {
    n /= 2;

    while (ok) {
      for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
      }
      for (int i = n; i >= 1; i--) {
        cout << arr[i] << ' ';
      }
      cout << endl;

      next();
    }
  } else {
    n = (n + 1) / 2;

    while (ok) {
      for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
      }
      for (int i = n - 1; i >= 1; i--) {
        cout << arr[i] << ' ';
      }
      cout << endl;

      next();
    }
  }

  return 0;
}