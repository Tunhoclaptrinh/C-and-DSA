#include <bits/stdc++.h>
using namespace std;

int partitionLomuto(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = l - 1;

  for (int j = l; j < r; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  i++;
  swap(arr[i], arr[r]);

  return i;
}

void quickSort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }

  int p = partitionLomuto(arr, l, r);
  quickSort(arr, l, p - 1);
  quickSort(arr, p + 1, r);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int arr[m + n];

    for (int &x : a) {
      cin >> x;
    }
    for (int &x : b) {
      cin >> x;
    }

    quickSort(a, 0, n - 1);
    quickSort(b, 0, m - 1);

    int idx = 0;
    int i = 0;
    int j = 0;

    while (i < n && j < m) {
      if (a[i] < b[j]) {
        arr[idx++] = a[i++];
      } else {
        arr[idx++] = b[j++];
      }
    }

    while (i < n) {
      arr[idx++] = a[i++];
    }

    while (j < m) {
      arr[idx++] = b[j++];
    }

    for (int x : arr) {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}