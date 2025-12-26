#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key, int l, int r) {
  if (l > r) {
    return -1;
  }

  int mid = (l + r) / 2;
  if (arr[mid] == key) {
    return mid;
  } else if (key > arr[mid]) {
    return binarySearch(arr, key, mid + 1, r);
  } else {
    return binarySearch(arr, key, l, mid - 1);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    if (binarySearch(arr, k, 0, n - 1) != -1) {
      cout << 1;
    } else {
      cout << -1;
    }

    cout << endl;
  }

  return 0;
}