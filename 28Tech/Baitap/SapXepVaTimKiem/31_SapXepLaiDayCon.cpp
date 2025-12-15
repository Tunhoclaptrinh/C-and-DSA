#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  int idx = l;
  int n1 = m - l + 1;
  int n2 = r - m;
  int i = 0, j = 0;

  // copy sang 2 mảng để chuẩn bị merge
  int a[n1], b[n2];
  for (int k = l; k <= m; k++) {
    a[i++] = arr[k];
  }
  for (int k = m + 1; k <= r; k++) {
    b[j++] = arr[k];
  }

  // reset chỉ số
  i = 0;
  j = 0;
  // merge

  while (i < n1 && j < n2) {
    if (a[i] < b[j]) {
      arr[idx++] = a[i++];
    } else {
      arr[idx++] = b[j++];
    }
  }

  while (i < n1) {
    arr[idx++] = a[i++];
  }
  while (j < n2) {
    arr[idx++] = b[j++];
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l >= r)
    return;

  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int arrCopy[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      arrCopy[i] = arr[i];
    }

    mergeSort(arr, 0, n - 1);

    int l = 0;
    int r = n - 1;
    for (int i = 0; i < n; i++) {
      if (arr[i] != arrCopy[i]) {
        l = i;
        break;
      }
    }

    for (int i = n - 1; i >= 0; i--) {
      if (arr[i] != arrCopy[i]) {
        r = i;
        break;
      }
    }

    if (l >= r) {
      cout << "1 1\n";
      continue;
    }

    cout << l + 1 << ' ' << r + 1;

    cout << endl;
  }
  return 0;
}