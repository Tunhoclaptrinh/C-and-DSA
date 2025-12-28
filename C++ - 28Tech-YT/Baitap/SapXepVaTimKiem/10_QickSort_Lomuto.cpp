#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int partition(int arr[], int l, int r) {
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

  // trả về vị trí hiện tại của nó
  return i;
}

void quickSort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }

  int p = partition(arr, l, r);
  quickSort(arr, l, p - 1);
  quickSort(arr, p + 1, r);
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

    quickSort(arr, 0, n - 1);
    printArr(arr, n);
  }

  return 0;
}