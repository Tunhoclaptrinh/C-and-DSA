#include <bits/stdc++.h>
using namespace std;

int ok;

void init(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}

void printPermum(int arr[], int n, int &step) {
  cout << step++ << ": ";

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

void next(int arr[], int n) {
  int i = n - 2;
  while (i >= 0 && arr[i] > arr[i + 1]) {
    i--;
  }
  if (i == -1) {
    ok = 0;
  } else {
    int j = n - 1;
    while (j >= 0 && arr[i] > arr[j]) {
      j--;
    }

    swap(arr[i], arr[j]);
    reverse(arr + i + 1, arr + n);
  }
}

int main() {
  int n;
  cin >> n;
  ok = 1;
  int arr[n];
  int step = 1;
  init(arr, n);
  while (ok) {
    printPermum(arr, n, step);

    next(arr, n);
  }

  return 0;
}