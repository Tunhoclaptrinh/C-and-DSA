#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
  vector<int> x(arr, arr + mid + 1);
  vector<int> y(arr + mid + 1, arr + r + 1);
  int i = 0, j = 0;
  while (i < x.size() && j < y.size()) {
    if (x[i] <= y[j]) {
      arr[l] = x[i];
      l++;
      i++;
    } else {
      arr[l] = y[j];
      l++;
      j++;
    }
  }

  while (i < x.size()) {
    arr[l] = x[i];
    l++;
    i++;
  }
  while (j < y.size()) {
    arr[l] = y[j];
    l++;
    j++;
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
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  mergeSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}

// 8
// 8 2 1 9 7 3 6 5
