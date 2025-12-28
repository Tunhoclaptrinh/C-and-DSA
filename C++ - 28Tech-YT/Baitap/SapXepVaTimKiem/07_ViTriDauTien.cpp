#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }

  return -1;
}

int binarySearch(int arr[], int n, int key, int l, int r) {
  if (l > r)
    return -1;

  int mid = (l + r) / 2;

  if (arr[mid] == key) {
    if (mid == 0 || arr[mid - 1] != key)
      return mid;
    return binarySearch(arr, n, key, l, mid - 1);
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

    cout << linearSearch(arr, n, x) << endl;
    cout << binarySearch(arr, n, x, 0, n - 1) << endl;
  }

  return 0;
}