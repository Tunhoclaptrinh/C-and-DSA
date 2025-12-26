#include <bits/stdc++.h>
using namespace std;
int ok;

void init(int arr[], int n, int k) {
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

void printArr(int arr[], int k) {
  for (int i = 0; i < k; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    ok = 1;
    int arr[k];
    init(arr, n, k);
    int cnt = 1;
    while (ok) {
      // if (cnt % (k - 1) == 0) {
      cout << cnt << ": ";

      printArr(arr, k);
      // }
      cnt++;
      next(arr, n, k);
    }

    cout << endl;
  }

  return 0;
}