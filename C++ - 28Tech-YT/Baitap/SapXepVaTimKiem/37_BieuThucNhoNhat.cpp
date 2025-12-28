#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  // copy
  int idx = l;
  int n1 = m - l + 1;
  int n2 = r - m;
  int i = 0, j = 0;

  int a[n1];
  int b[n2];
  for (int k = l; k <= m; k++) {
    a[i++] = arr[k];
  }

  for (int k = m + 1; k <= r; k++) {
    b[j++] = arr[k];
  }

  // reset i, j
  i = 0, j = 0;

  // merge
  while (i < n1 && j < n2) {
    if (a[i] < b[j]) {
      arr[idx++] = a[i++];
    } else {
      arr[idx++] = b[j++];
    }
  }

  // rải phần còn lại

  while (i < n1) {
    arr[idx++] = a[i++];
  }

  while (j < n2) {
    arr[idx++] = b[j++];
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }

  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
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

    mergeSort(arr, 0, n - 1);
    reverse(arr, arr + n);

    int res = arr[0];

    for (int i = 1; i < n; i++) {
      if (k > 0) {
        res += arr[i];
        k--;
      } else {
        res -= arr[i];
      }
    }

    cout << res << endl;
  }

  return 0;
}

// 1
//
// 5 2
//
// 28 9 5 1 69
//
//
//  => 100
