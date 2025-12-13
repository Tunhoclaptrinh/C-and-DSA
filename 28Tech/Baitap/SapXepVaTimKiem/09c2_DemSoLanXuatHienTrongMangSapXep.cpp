#include <bits/stdc++.h>

using namespace std;

int Dau(int arr[], int n, int key, int l, int r) {
  if (l > r) {
    return -1;
  }

  int mid = (l + r) / 2;

  if (arr[mid] == key) {
    if (mid == 0 || arr[mid - 1] != key) {
      return mid;
    }
    return Dau(arr, n, key, l, mid - 1);
  } else if (arr[mid] < key) {
    return Dau(arr, n, key, mid + 1, r);
  } else {
    return Dau(arr, n, key, l, mid - 1);
  }
}

int Cuoi(int arr[], int n, int key, int l, int r) {
  if (l > r) {
    return -1;
  }

  int mid = (l + r) / 2;

  if (arr[mid] == key) {
    if (mid == n - 1 || arr[mid + 1] != key) {
      return mid;
    }
    return Cuoi(arr, n, key, mid + 1, r);
  } else if (arr[mid] < key) {
    return Cuoi(arr, n, key, mid + 1, r);
  } else {
    return Cuoi(arr, n, key, l, mid - 1);
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

    int cuoi = Cuoi(arr, n, x, 0, n - 1);
    int dau = Dau(arr, n, x, 0, n - 1);

    if (cuoi == -1) {
      cout << 0;
    } else {
      cout << cuoi - dau + 1;
    }
  }

  return 0;
}