#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  int left[n1];
  int right[n2];

  for (int i = 0; i < n1; i++)
    left[i] = arr[l + i];

  for (int j = 0; j < n2; j++)
    right[j] = arr[m + 1 + j];

  int i = 0, j = 0, idx = l;

  while (i < n1 && j < n2) {
    if (left[i] <= right[j])
      arr[idx++] = left[i++];
    else
      arr[idx++] = right[j++];
  }

  while (i < n1)
    arr[idx++] = left[i++];
  while (j < n2)
    arr[idx++] = right[j++];
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
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
      cout << arr[i] << ' ';
    }

    cout << endl;
  }

  return 0;
}