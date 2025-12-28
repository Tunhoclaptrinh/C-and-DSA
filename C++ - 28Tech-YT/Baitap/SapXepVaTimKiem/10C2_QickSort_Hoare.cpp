#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int partition(int arr[], int l, int r) {
  int pivot = arr[(l + r) / 2];
  int i = l - 1;
  int j = r + 1;

  while (true) {
    do {
      i++;
    } while (arr[i] < pivot);

    do {
      j--;
    } while (arr[j] > pivot);

    if (i >= j)
      return j;

    swap(arr[i], arr[j]);
  }
}

void quickSort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }
  int p = partition(arr, l, r);
  quickSort(arr, l, p);
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