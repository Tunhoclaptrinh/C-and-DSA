#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  // Copy 2 mảng
  int L[m - l + 1], R[r - m];
  for (int i = 0; i < m - l + 1; i++) {
    L[i] = arr[i + l];
  }

  for (int i = 0; i < r - m; i++) {
    R[i] = arr[m + i];
  }

  int i = 0, j = 0, k = l;
  while (i < m && j < r) {
    if (L[i] <= R[j]) {
      arr[k++] = L[i++];
    } else {
      arr[k++] = R[j++];
    }
  }

  while (i < m) {
    arr[k++] = L[i++];
  }
  while (j < r) {
    arr[k++] = R[j++];
  }
}

void mergerSort(int arr[], int left, int right) {
  if (left >= right) {
    return;
  }

  int mid = (left + right) / 2;
  mergerSort(arr, left, mid);
  mergerSort(arr, mid + 1, right);
  merge(arr, left, mid, right);
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

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }

  return 0;
}