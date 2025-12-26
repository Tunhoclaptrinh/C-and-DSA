#include <bits/stdc++.h>
using namespace std;

int ok;

void init(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 'A';
  }
}

void next(char arr[], int n) {
  int i = n - 1;
  while (i >= 0 && arr[i] == 'B') {
    arr[i] = 'A';
    i--;
  }

  if (i == -1) {
    ok = 0;
  } else {
    arr[i] = 'B';
  }
}

bool check(char arr[], int n, int k) {
  int cnt = 0, res = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 'A') {
      cnt++;
    } else {
      cnt = 0;
    }

    if (cnt > k) {
      return false;
    }

    if (cnt == k) {
      res++;
    }
  }

  return res == 1;
}

void printAB(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << ' ';
}

int main() {
  int n, k;
  cin >> n >> k;
  char arr[n];
  ok = 1;
  init(arr, n);

  while (ok) {
    if (check(arr, n, k)) {
      printAB(arr, n);
    }

    next(arr, n);
  }

  return 0;
}