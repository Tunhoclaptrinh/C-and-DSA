#include <bits/stdc++.h>
using namespace std;

int n, ok, cnt, arr[100];

void init() {
  cnt = 1;
  arr[1] = n;
}

void next() {
  int i = cnt;
  while (i >= 1 && arr[i] == 1) {
    i--;
  }

  if (i == 0) {
    ok = 0;
  } else {
    arr[i]--;
    int d = cnt - i + 1;
    cnt = i;
    int q = d / arr[i];
    int r = d % arr[i];
    if (q) {
      for (int j = 1; j <= q; j++) {
        cnt++;
        arr[cnt] = arr[i];
      }
    }
    if (r) {
      cnt++;
      arr[cnt] = r;
    }
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    ok = 1;
    cin >> n;

    init();

    while (ok) {
      for (int i = 1; i <= cnt; i++) {
        cout << arr[i] << ' ';
      }
      cout << endl;

      next();
    }
  }

  return 0;
}