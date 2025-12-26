#include <bits/stdc++.h>
using namespace std;

int ok;

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << endl;
}

void init(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 0;
  }
}

void next(int arr[], int n) {
  int i = n - 1;
  while (i >= 0 && arr[i] == 1) {
    arr[i] = 0;
    i--;
  }

  if (i == -1) {
    ok = 0; // dừng
  } else {
    arr[i] = 1;
  }
}

bool check(int arr[], int n, int k) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      cnt++;
    }
  }

  return cnt == k;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    ok = 1;
    int n, k;
    cin >> n >> k;
    int arr[n];

    init(arr, n);

    while (ok) {
      if (check(arr, n, k)) {
        print(arr, n);
      }
      next(arr, n);
    }
    // cout << endl;
  }

  return 0;
}