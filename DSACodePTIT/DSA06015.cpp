#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  vector<int> left, right;

  // copy mảng
  for (int i = l; i <= m; i++) {
    left.push_back(arr[i]);
  }
  for (int i = m + 1; i <= r; i++) {
    right.push_back(arr[i]);
  }

  int i = 0, j = 0;
  int idx = l;
  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      arr[idx++] = left[i++];
    } else {
      arr[idx++] = right[j++];
    }
  }

  while (i < left.size()) {
    arr[idx++] = left[i++];
  }

  while (j < right.size()) {
    arr[idx++] = right[j++];
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
    for (int &x : arr) {
      cin >> x;
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }

    cout << endl;
  }

  return 0;
}