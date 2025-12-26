#include <bits/stdc++.h>
using namespace std;

int arr[101], n, cnt, ok;

void init() {
  cnt = 1;
  arr[0] = n;
}

void next() {
  int i = cnt;
  while (i >= 1 && arr[i] == 1) {
    i--;
  }

  if (i == -1) {
    ok = 0;
  } else {
    arr[i]--;
    int d = cnt - i + 1;
    cnt = i;
    int q = d / arr[i];
    int r = d % arr[i];
    if (q) {
      for (int j = 1; j <= cnt; j++) {
      }
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ok = 1;
  }

  return 0;
}