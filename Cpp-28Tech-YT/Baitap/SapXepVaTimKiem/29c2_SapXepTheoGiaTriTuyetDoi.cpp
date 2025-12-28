#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r) {

  vector<int> a, b;
  // sao chép mảng => chuẩn bị merge
  for (int i = l; i <= m; i++) {
    a.push_back(arr[i]);
  }
  for (int i = m + 1; i <= r; i++) {
    b.push_back(arr[i]);
  }
  // copy xong

  // merge
  int idx = l; // vị trí bắt đầu của đoạn trong mảng gốc
  int i = 0;   // vị trí bắt đầu mảng a
  int j = 0;   // vị trí bắt đầu mảng b
  while (i < a.size() && j < b.size()) {
    if (abs(a[i]) < abs(b[j])) {
      arr[idx++] = a[i++];
    } else {
      arr[idx++] = b[j++];
    }
  }

  while (i < a.size()) {
    arr[idx++] = a[i++];
  }

  while (j < b.size()) {
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
    for (int &x : arr) {
      cin >> x;
    }

    mergeSort(arr, 0, n - 1);

    for (int x : arr)
      cout << x << ' ';
    cout << endl;
  }

  return 0;
}