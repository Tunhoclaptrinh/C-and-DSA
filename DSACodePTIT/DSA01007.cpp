#include <bits/stdc++.h>
using namespace std;

int ok;

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
    ok = 0;
  } else {
    arr[i] = 1;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ok = 1;
    int arr[n];

    init(arr, n);

    while (ok) {
      for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
          cout << 'A';
        } else {
          cout << 'B';
        }
      }
      cout << ' ';

      next(arr, n);
    }

    cout << endl;
  }

  return 0;
}