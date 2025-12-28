#include <bits/stdc++.h>
using namespace std;

int n, k, arr[100], ok;

void init() {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}

void next() {
  int i = n - 2;
  while (i >= 0 && arr[i] > arr[i + 1]) {
    i--;
  }

  if (i == -1) {
    ok = 0; // cấu hình cuối cùng
  } else {
    // đi tim thằng > arr[i] nhỏ nhất trong đoạn [i+1, n]
    int j = n - 1;
    while (j > i && arr[i] > arr[j]) {
      j--;
    }
    swap(arr[i], arr[j]);
    reverse(arr + i + 1, arr + n);
  }
}

int main() {
  cin >> n;
  ok = 1;
  init();
  while (ok) {
    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
    next();
  }

  return 0;
}