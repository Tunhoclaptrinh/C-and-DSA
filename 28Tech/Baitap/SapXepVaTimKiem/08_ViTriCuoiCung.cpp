#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key, int l, int r) {
  if (l > r)
    return -1;

  int mid = (l + r) / 2;

  if (arr[mid] == key) {
    if (mid == n - 1 || arr[mid + 1] != key)
      return mid;
    return binarySearch(arr, n, key, mid + 1, r);
  } else if (arr[mid] > key) {
    return binarySearch(arr, n, key, l, mid - 1);
  } else {
    return binarySearch(arr, n, key, mid + 1, r);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << binarySearch(arr, n, x, 0, n - 1) << endl;
  }

  return 0;
}