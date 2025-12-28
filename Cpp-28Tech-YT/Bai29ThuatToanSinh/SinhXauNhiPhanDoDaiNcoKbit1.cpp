#include <bits/stdc++.h>
using namespace std;

int n, arr[100], ok, k;

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
    ok = 0;
  } else {
    arr[i] = 1;
  }
}

bool check() {
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    cnt += arr[i];
  }

  return cnt == k;
}

int main() {
  cin >> n >> k;
  ok = 1;
  while (ok) {
    if (check()) {
      for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
      }
      cout << endl;
    }

    next();
  }

  return 0;
}