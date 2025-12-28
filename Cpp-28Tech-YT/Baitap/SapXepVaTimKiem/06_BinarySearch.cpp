#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[], int n, int key, int l, int r) {
  if (l > r)
    return false;
  int mid = (l + r) / 2;

  if (key == arr[mid]) {
    return true;
  } else if (key < arr[mid]) {
    return binarySearch(arr, n, key, l, mid - 1);
  } else {
    return binarySearch(arr, n, key, mid + 1, r);
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    if (binarySearch(arr, n, key, 0, n)) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return 0;
}