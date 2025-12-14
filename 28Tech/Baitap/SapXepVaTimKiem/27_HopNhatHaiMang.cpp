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

    int arr[n + m];

    for (int &x : arr)
      cin >> x;

    quickSort(arr, 0, n + m - 1);

    for (int x : arr) {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}