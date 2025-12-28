#include <bits/stdc++.h>
using namespace std;

int ok;

void printC(int arr[], int k) {
  for (int i = 0; i < k; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

void init(int arr[], int k) {
  for (int i = 0; i < k; i++) {
    arr[i] = i + 1;
  }
}

void next(int arr[], int n, int k) {
  int i = k - 1;
  while (i >= 0 && arr[i] == n - k + i + 1) {
    i--;
  }

  if (i == -1) {
    ok = 0;
  } else {
    arr[i]++;
    for (int j = i + 1; j < k; j++) {
      arr[j] = arr[j - 1] + 1;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ok = 1;
    int n, k;
    cin >> n >> k;
    int arr[k];
    init(arr, k);
    while (ok) {
      printC(arr, k);

      next(arr, n, k);
    }
  }

  return 0;
}