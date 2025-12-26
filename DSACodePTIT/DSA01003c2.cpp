#include <bits/stdc++.h>
using namespace std;

void next(int arr[], int n) {
  int i = n - 2;
  while (i >= 0 && arr[i] > arr[i + 1]) {
    i--;
  }

  if (i != -1) {
    int j = n - 1;
    while (j >= 0 && arr[i] > arr[j]) {
      j--;
    }
    swap(arr[i], arr[j]);
    reverse(arr + i + 1, arr + n);
  } else {
    for (int k = 0; k < n; k++) {
      arr[k] = k + 1;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    next(arr, n);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}