#include <bits/stdc++.h>
using namespace std;

int ok;

void printArr(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << ' ';
}

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
    ok = 0; // Dừng
  } else {
    arr[i] = 'B';
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ok = 1;
    int n;
    cin >> n;
    char arr[n];
    init(arr, n);

    while (ok) {
      printArr(arr, n);

      next(arr, n);
    }

    cout << endl;
  }

  return 0;
}