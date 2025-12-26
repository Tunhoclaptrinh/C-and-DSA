#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, arr[100], ok, k;

// khởi tạo
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
  int dem = 0, res = 0;
  for (int i = 1; i <= n; i++) {
    if (arr[i] == 0) {
      dem++;
    } else {
      dem = 0;
    }

    if (dem > k) {
      return false;
    }
    if (dem == k) {
      res++;
    }
  }

  return res == 1;
}

int main() {
  cin >> n >> k;
  ok = 1;
  init();

  while (ok) {
    if (check()) {
      for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
          cout << 'A';
        } else {
          cout << 'B';
        }
      }
      cout << ' ';
    }
    next();
  }
  cout << endl;

  return 0;
}